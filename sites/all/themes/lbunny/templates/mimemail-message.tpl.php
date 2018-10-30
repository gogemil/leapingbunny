<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <style>
      a {
        color: #005bab;
        text-decoration: none;
        font-weight: bold;
      }
    </style>
  </head>
  <body <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?> style="max-width: 600px; margin-left:auto; margin-right:auto; font-size:12px; font-family:sans-serif;">
    <!--OPEN CONTAINER-->
    <table width="100%" style="margin-top:0px;">
      <tbody>
      <tr>
        <td>

          <!--OPEN HEADER-->
          <table width="100%">
            <tbody>
            <tr>
              <td style="border-bottom-color:#646464; border-bottom-style:solid; border-bottom-width:1px;">
                <img src="sites/default/files/email-logo.gif" width="80%"/>
              </td>
            </tr>
            </tbody>
          </table>
          <!--CLOSE HEADER-->
          <!--OPEN BODY-->
          <table>
            <tbody>
            <tr>
              <td>

                <h1 style="font-size:14px; color:#5ba573; font-weight:bold; margin-bottom:0px; margin-top:0px;"><?php print $subject ?></h1>
                <br />

                <?php print $body ?>
                <br />

              </td>
            </tr>
            </tbody>
          </table>
          <!--CLOSE BODY-->
          <!--OPEN FOOTER-->
          <table width="100%" style="border-top-color:#646464; border-top-style:solid; border-top-width:1px;">
            <tbody>
            <tr>
              <td width="50%">
                <p style="line-height:20px;">
                  Coalition for Consumer Information on Cosmetics
                  <br />
                  PO Box 56537
                  <br />
                  Philadelphia, PA 19111
                </p>
              </td>
              <td width="50%" style="text-align:right;">
                <p style="line-height:20px;">
                  (888) 546-CCIC
                  <br />
                  <a href="mailto:admin@leapingbunny.org" style="color:#005bab; text-decoration:none;">admin@leapingbunny.org</a>
                  <br />
                  <a href="http://www.leapingbunny.org" style="color:#005bab; text-decoration:none;">www.leapingbunny.org</a>
                </p>
              </td>
            </tr>
            </tbody>
          </table>
          <!--CLOSE FOOTER-->
        </td>
      </tr>
      </tbody>
    </table>
    <!--COSE CONTAINER-->
    </body>
</html>
