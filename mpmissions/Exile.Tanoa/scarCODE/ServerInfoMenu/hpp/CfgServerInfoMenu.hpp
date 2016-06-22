class CfgServerInfoMenu
{
   antiHACK = "infiSTAR + BattlEye";
   hostedBy = "Undead Brasil Servidores";
   ipPort = "149.56.193.71:2302";
   openKey = "User7"; // https://community.bistudio.com/wiki/inputAction/actions
   restart = 4; // Amount of hours before server automatically restarts
   serverName = "Tanoa UndeadZ Exile";
   class menuItems
   {

      class first
      {
         menuName = "General";
         title = "GENERAL INFORMATION";
         content[] = {
            "Server restarts every 4 hours<br/>Day and night cycle, /vote day/night is turned off.<br/>",
			"Make sure to empty any vehicle before putting it into the virtual garage!!<br />If you don't, it will be empty when you go to retrieve it!",
			"<br/>",
			"If you would like to donate head over to the website and click donate in the Feed the Zombies on the right side of the homepage.",
			"<br/>DISCLAIMER: I do NOT and will NOT monetize this server or give donation perks.<br/>If you do donate, just know you will have a great place to keep playing at!"
         };
      };
      class second
      {
         menuName = "Rules";
         title = "SERVER RULES";
         content[] = {
            "<t size='1.75'>Rule #1</t><br />Players/admins are NOT permitted to show racism, profanity and disrespect towards any other player/admin in this server.<br />",
            "<t size='1.75'>Rule #2</t><br />No voice transmission over side chat. Adjust your control settings to prevent doing it by accident.<br />",
			"<t size='1.75'>Rule #3</t><br />Do NOT leave vehicles parked in the trader zones. They will be unlocked upon restart and be free to whoever finds it!<br />",
			"<t size='1.75'>Rule #4</t><br />This is a PVE Server, NO player killing, stealing, base raiding!!<br /> IF you kill someone on accident, you are required to help said person retrieve corpse/gear!!<br />",
			"<t size='1.75'>Rule #5</t><br />PVP is ALLOWED at zupa's capture points within 1500 meters!!<br />Once the point is captured, no more pvp is allowed!!",
			"<t size='1.75'>Rule #6</t><br />Claim missions by being within 1500 meters and marking your name on it in the side channel!<br />Try grouping up and sharing loot, theres plenty to go around and more fun!<br />",
			"<t size='1.75'>Rule #7</t><br />You are allowed to have 3 vehicles on the map, 5 for a group.<br/>All other vehicles should be stored in the virtual garage.<br />"
         };
      };
      class third
      {
         menuName = "Crafting";
         title = "CRAFTING GUIDE";
         content[] = {"Open up XM8 and go to apps then click on receipes"};
      };
      class fourth
      {
         menuName = "Admins";
         title = "ADMINISTRATORS";
         content[] = {"Zombie Pacifier<br />Beeteez<br/>(CJ)KillinTime<br/>Harold"};
      };
      class fifth
      {
         menuName = "Scripts";
         title = "INSTALLED SCRIPTS";
         content[] = {"A Shit Ton"};
      };
      class sixth
      {
         menuName = "Communication";
         title = "VOICE SERVER AND WEBSITE";
         content[] = {
            "<t size='1.25'>TeamSpeak:</t> ts3.undeadbrasil.com",
            "<br />",
            "<t size='1.25'>Forum:</t> http://www.undeadbrasil.com/forum/"
         };
      };
      class seventh
      {
         menuName = "Credits";
         title = "CREDITS WHERE CREDITS DUE";
         content[] = {
            "<t size='1.25'>IT07:</t> coder/creator of this menu",
            "<br />",
            "All the wonderful Exile Dev's and community scripters!!",
			"<br/>",
			"Beeteez for the awesome Firing Range!!",
			"<br/>",
			"Serverimage and Trader Signs done by https://www.undeadbrasil.com/forum/"
         };
      };
   };
};
