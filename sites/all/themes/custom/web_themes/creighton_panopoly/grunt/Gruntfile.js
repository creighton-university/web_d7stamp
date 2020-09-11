module.exports = function(grunt) {


  // Project configuration.
  grunt.initConfig({
    // Metadata.
    pkg: grunt.file.readJSON('package.json'),
    banner: '/*! <%= pkg.title || pkg.name %> - v<%= pkg.version %> - ' +
      '<%= grunt.template.today("yyyy-mm-dd") %>\n' +
      '<%= pkg.homepage ? "* " + pkg.homepage + "\\n" : "" %>' +
      '* Copyright (c) <%= grunt.template.today("yyyy") %> <%= pkg.author %>;' +
      ' <%= pkg.license %> License */\n',

    grunticon: {
      icons: {
        options: {
          svgo: true,
          pngcrush: true,
          src: "../images/svgs/",
          dest: "../images/",
          datasvgcss: "_icons.data.svg.scss",
          datapngcss: "_icons.data.png.scss",
          urlpngcss: "_icons.fallback.scss"
        }
      }
    },
    copy: {
      dev: {
        files: [
          {expand: true, cwd: '', src: ['../images/icons/png/**'], dest: '../images/'},
          {expand: true, src: ['../images/icons/_icons.data.svg.scss', '../images/icons/_icons.data.png.scss', '../images/icons/_icons.fallback.scss'], dest: '../sass/partials/utility/', flatten: true, filter: 'isFile'}
        ]
      }
    }
  });

  // These plugins provide necessary tasks.
  grunt.loadNpmTasks('grunt-grunticon');
  grunt.loadNpmTasks('grunt-contrib-copy');

  // Default task.
  grunt.registerTask('assets', ['grunticon','copy:dev']);
  grunt.registerTask('images', ['grunticon']);
  grunt.registerTask('default', ['assets']);

};
