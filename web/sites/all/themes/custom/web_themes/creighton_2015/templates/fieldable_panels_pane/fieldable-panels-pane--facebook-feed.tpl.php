<?php
    // fieldable panel pane for facebook feeds

    $fb_url             = $content['field_facebook_page_url'][0]['#markup'];
    $fb_hide_cover      = $content['field_fb_hide_cover'][0]['#markup'] == "true" ? "true" : "false";
    $fb_option_facepile = $content['field_fb_show_facepile'][0]['#markup'] == "true" ? "true" : "false";
    $fb_tab_options     = $content['field_fb_show_timeline'][0]['#markup'] == "true" ? "timeline" : "";

    if ($content['field_fb_show_events'][0]['#markup'] == "true") {
        $fb_tab_options .= (strlen($fb_tab_options) > 0) ? ",events": "events";
    }

    if($content['field_fb_allow_messages'][0]['#markup'] == "true") {
        $fb_tab_options .= (strlen($fb_tab_options) > 0) ? ",messages": "messages";
    }
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php //print render($title_suffix); ?>
    <?php //print render($content); ?>
</div>
<div id="fb-root"></div>
<script>(function(d, s, id) {
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) return;
        js = d.createElement(s); js.id = id;
        js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&version=v2.5&appId=363204045400";
        fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));</script>

<?php if (strlen($fb_url) > 0) : ?>
    <div class="fb-page"
         data-href="<?php print $fb_url; ?>"
        <?php if(strlen($fb_tab_options) > 0) print 'data-tabs="'.$fb_tab_options.'"'; ?>
         data-small-header="true"
         data-adapt-container-width="true"
         data-hide-cover="<?php print $fb_hide_cover; ?>"
         data-show-facepile="<?php print $fb_option_facepile; ?>"
    <!--data-width="380"-->
    <div class="fb-xfbml-parse-ignore">
        <blockquote cite="<?php print $fb_url; ?>">
            <a href="<?php echo $fb_url; ?>">Go to my facebook feed.</a>
        </blockquote>
    </div>
    </div>
<?php else: ?>
    <p style="color:red;">Error: facebook URL is required, but not provided.</p>
<?php endif; ?>

<script>
