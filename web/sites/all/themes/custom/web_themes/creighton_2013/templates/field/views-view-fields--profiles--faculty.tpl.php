<?php //krumo($fields); ?>

<div class="faculty-profile-photo">
  <?php print render($fields['field_profile2_image']->content); ?>
</div>
<div class="faculty-profile-content">
  <h4><?php print render($fields['field_profile2_name']->content); ?></h4>
  <?php if( isset($fields['field_profile2_position']->content) ) : ?>
    <p class="profile-positions"><?php print render($fields['field_profile2_position']->content); ?></p>
  <?php endif; ?>
  <?php if( isset($fields['field_profile2_specialties']->content) ) : ?>
    <?php print render($fields['field_profile2_specialties']->content); ?>
  <?php endif; ?>
  <p class="faculty-profile-link"><?php print render($fields['view_node']->content); ?></p>
</div>
