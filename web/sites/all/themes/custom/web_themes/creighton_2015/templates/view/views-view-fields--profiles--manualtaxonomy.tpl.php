<div class="fac-staff-ldr-profile-photo">
  <?php print render($fields['field_profile2_image']->content); ?>
</div>
<div class="fac-staff-ldr-profile-content">
  <h4><?php print render($fields['field_profile2_name']->content); ?></h4>
  <?php if( isset($fields['field_profile2_position']->content) ) : ?>
    <p class="profile-positions"><?php print render($fields['field_profile2_position']->content); ?></p>
  <?php endif; ?>
  <?php if( isset($fields['field_profile2_specialties']->content) ) : ?>
    <?php print render($fields['field_profile2_specialties']->content); ?>
  <?php endif; ?>  
  <?php if( isset($fields['field_profile2_email']->content) ) : ?>
    <p class="profile-email"><?php print render($fields['field_profile2_email']->content); ?></p>
  <?php endif; ?>
  <?php if( isset($fields['field_profile2_phone']->content) ) : ?>
    <p class="profile-phone"><?php print render($fields['field_profile2_phone']->content); ?></p>
  <?php endif; ?>
</div>
<p class="fac-ldr-profile-link"><?php print render($fields['view_node']->content); ?></p>
