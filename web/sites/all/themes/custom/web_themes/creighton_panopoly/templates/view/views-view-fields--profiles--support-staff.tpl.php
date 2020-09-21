<div class="fac-staff-ldr-profile-photo">
  <?php print render($fields['field_profile_image']->content); ?>
</div>
<div class="fac-staff-ldr-profile-content">
  <h4><?php print render($fields['field_profile_name']->content); ?></h4>
  <?php if( isset($fields['field_profile_position']->content) ) : ?>
    <p class="profile-positions"><?php print render($fields['field_profile_position']->content); ?></p>
  <?php endif; ?>
  <?php if( isset($fields['field_profile_email']->content) ) : ?>
    <p class="profile-email"><?php print render($fields['field_profile_email']->content); ?></p>
  <?php endif; ?>
  <?php if( isset($fields['field_profile_phone']->content) ) : ?>
    <p class="profile-phone"><?php print render($fields['field_profile_phone']->content); ?></p>
  <?php endif; ?>
  <?php if( isset($fields['field_profile_office_location']->content) ) : ?>
    <p class="profile-office"><?php print render($fields['field_profile_office_location']->content); ?></p>
  <?php endif; ?>
</div>
