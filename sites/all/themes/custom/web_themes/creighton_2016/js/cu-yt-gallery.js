/**
 * Created on 10/21/2016.
 * Front page Youtube video gallery
 * place in the footer
 * Items in the script need to be on the global scope for YouTube iframe API to do it's thing.
 */
var tag = document.createElement("script");

tag.src = "https://www.youtube.com/iframe_api";
var firstScriptTag = document.getElementsByTagName("script")[0];
firstScriptTag.parentNode.insertBefore(tag, firstScriptTag);

// declare ytplayer object
var ytplayer = {};

function onPlayerStateChange(event) {
    for (var key in ytplayer) {
        if(key != event.target.getVideoData().video_id) {
            if(ytplayer[key].getPlayerState() == 1) {
                ytplayer[key].pauseVideo();
            }
        }
    }
}

function onYouTubeIframeAPIReady() {
    jQuery(".youtube-embed").each(function(i, obj) {
        ytplayer[jQuery(this).attr("data-embed")] = new YT.Player(obj.id, {
            height: jQuery(this).attr("data-youtube-height"),
            width: jQuery(this).attr("data-youtube-width"),
            videoId: jQuery(this).attr("data-embed"),
            playerVars: {
                "enablejsapi": 1,
                "origin": document.domain,
                "rel": 0
            },
            events: {
                "onStateChange": onPlayerStateChange
            }
        });
    });
}