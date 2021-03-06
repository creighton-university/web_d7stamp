<?php

/**
 * @file
 * Customize the e-mails sent by Webform after successful submission.
 *
 * This file may be renamed "webform-mail-[nid].tpl.php" to target a
 * specific webform e-mail on your site. Or you can leave it
 * "webform-mail.tpl.php" to affect all webform e-mails on your site.
 *
 * Available variables:
 * - $node: The node object for this webform.
 * - $submission: The webform submission.
 * - $email: The entire e-mail configuration settings.
 * - $user: The current user submitting the form.
 * - $ip_address: The IP address of the user submitting the form.
 *
 * The $email['email'] variable can be used to send different e-mails to different users
 * when using the "default" e-mail template.
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>Creighton University</title>
<style>
.ReadMsgBody {
  width: 100%;
}
.ExternalClass {
  width: 100%;
}
font {
  -webkit-text-size-adjust: none; 
}
a:link, a:visited, a:hover {
  color: #00558c;
}
html {
  font-size: 14px;
  line-height: 22px;
  color: #6a6a6a;
}
label {
  font-weight: bold;
  color: #53565a;
}
.fieldset-legend {
  font-weight: bold;
  color: #00558c;
}
.webform-component-fieldset {
  margin-top: 10px;
}
</style>
</head>
  <body>
    <table width="500" border="0" cellspacing="0" cellpadding="0">
    <?php 
    //Send Thank you to form entered email
    if( strlen($email['email']) == 1 ) {
    ?>
      <tr>
        <td align="left" valign="top" style="line-height:20px;">
          <font face="Arial, Helvetica, sans-serif" color="#787878" style="font-size:14px; line-height:20px; font-family:Arial, Helvetica, sans-serif;">
          Your form was submitted on [submission:date:long].<br />
          Thank you.<br />
          </font>
        </td>
      </tr>
    <?php
    } 
    //Send submitted form reply to webform entered email
    else {
    ?>
      <tr>
        <td align="left" valign="top" style="line-height:20px;">
          <font face="Arial, Helvetica, sans-serif" color="#787878" style="font-size:14px; line-height:20px; font-family:Arial, Helvetica, sans-serif;">
          Submitted on [submission:date:long]<br />
          Submitted by user: [submission:user]<br />
          </font>
        </td>
      </tr>
      <tr>
        <td height="5" > </td>
      </tr>
      <tr>
        <td align="left" style="line-height:22px;">
          <font face="Arial, Helvetica, sans-serif" style="font-size:14px; line-height:22px; font-family:Arial, Helvetica, sans-serif;">
            [submission:values]
          </font>
        </td>
      <tr>
        <td align="left" style="line-height:22px;">&nbsp;</td>
      </tr>
      <tr>
        <td align="left" style="line-height:22px;">
          <font face="Arial, Helvetica, sans-serif" style="font-size:14px; line-height:22px; font-family:Arial, Helvetica, sans-serif;">
            The results of this submission may be viewed at:
            <br />
            [submission:url]
          </font>
        </td>
      </tr>

    <?php
    }
    ?> 
    </table>
  </body>
</html>

