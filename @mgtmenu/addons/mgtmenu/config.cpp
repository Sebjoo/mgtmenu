class CfgPatches
{
	class MGT_MainMenu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_UI_F"
		};
	};
};
class RscButton;
class RscPictureKeepAspect;
class IGUIBack;
class RscFrame;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscPicture{};
class RscStandardDisplay{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{}; 
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	scriptName="RscDisplayMain";
	scriptPath="GUI";
	onLoad="[""onLoad"",_this,""RscDisplayMain"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayMain"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
	delete Spotlight;
	class controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		delete SpotlightPrev;
		delete SpotlightNext;
		
	class logo:RscActivepicture {
            text="\mgtmenu\data\logo.paa";
            url="https://discord.gg/mgt";
            tooltip="MGT Discord";
            onButtonClick="";
            onload="";
        };
        class logoApex:logo {
            show=0;
            onload="";
            text="";
        };
	class RscMainMenuSpotlight: RscControlsGroupNoScrollbars{
			show=0;
		};
	class infomods:RscControlsgroupNoHScrollbars {
            show=0;
        };
        class infoDLCsOwned:infomods {
            show=0;
        };
        class infoDLCs:infoDLCsOwned {
            show=0;
        };
        class infoNews:infomods {
            show=0;
        };
        class infoVersion:infoNews {
            show=0;
        };
		class altisServerTxt: RscText
		{
			idc=1000;
			text="| Join Altis Exile";
			x="0.875 * safezoneW + safezoneX";
			y="0.72 * safezoneH + safezoneY";
			w="0.1125 * safezoneW";
			h="0.04 * safezoneH";
		};
		class tanoaServerTxt: RscText
		{
			idc=1003;
			text="| Join Tanoa Exile";
			x="0.875 * safezoneW + safezoneX";
			y="0.78 * safezoneH + safezoneY";
			w="0.1125 * safezoneW";
			h="0.04 * safezoneH";
		};
		class maldenServerTxt: RscText
		{
			idc=1006;
			text="| Join Malden Exile";
			x="0.875 * safezoneW + safezoneX";
			y="0.84 * safezoneH + safezoneY";
			w="0.1125 * safezoneW";
			h="0.04 * safezoneH";
		};
		class chernoServerTxt: RscText
		{
			idc=1012;
			text="| Join Cherno Exile";
			x="0.875 * safezoneW + safezoneX";
			y="0.90 * safezoneH + safezoneY";
			w="0.1125 * safezoneW";
			h="0.04 * safezoneH";
		};
		class altisServerLogo: RscPictureKeepAspect
		{
			idc=1200;
			text="mgtmenu\data\logonoback.paa";
			x="0.85 * safezoneW + safezoneX";
			y="0.72 * safezoneH + safezoneY";
			w="0.025 * safezoneW";
			h="0.04 * safezoneH";
		};
		class tanoaServerLogo: RscPictureKeepAspect
		{
			idc=1201;
			text="mgtmenu\data\logonoback.paa";
			x="0.85 * safezoneW + safezoneX";
			y="0.78 * safezoneH + safezoneY";
			w="0.025 * safezoneW";
			h="0.04 * safezoneH";
		};
		class maldenServerLogo: RscPictureKeepAspect
		{
			idc=1202;
			text="mgtmenu\data\logonoback.paa";
			x="0.85 * safezoneW + safezoneX";
			y="0.84 * safezoneH + safezoneY";
			w="0.025 * safezoneW";
			h="0.04 * safezoneH";
		};
		class chernoServerLogo: RscPictureKeepAspect
		{
			idc=1203;
			text="mgtmenu\data\logonoback.paa";
			x="0.85 * safezoneW + safezoneX";
			y="0.90 * safezoneH + safezoneY";
			w="0.025 * safezoneW";
			h="0.04 * safezoneH";
		};
		class altisServerBtn: RscButton
		{
			idc=1601;
			x="0.85 * safezoneW + safezoneX";
			y="0.72 * safezoneH + safezoneY";
			w="0.15 * safezoneW";
			h="0.04 * safezoneH";
			colorText[]={0,0,0,0};
			colorBackground[]={0,0,0,0};
			colorActive[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			onButtonClick="connectToServer ['188.165.198.127', 5302, ''];";
			tooltip="Join the MGT Altis Exile Server";
		};
		class tanoaServerBtn: RscButton
		{
			idc=1602;
			x="0.85 * safezoneW + safezoneX";
			y="0.78 * safezoneH + safezoneY";
			w="0.15 * safezoneW";
			h="0.04 * safezoneH";
			colorText[]={0,0,0,0};
			colorBackground[]={0,0,0,0};
			colorActive[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			onButtonClick="connectToServer ['188.165.198.127', 4302, ''];";
			tooltip="Join the MGT Tanoa Exile Server";
		};
		class maldenServerBtn: RscButton
		{
			idc=1601;
			x="0.85 * safezoneW + safezoneX";
			y="0.84 * safezoneH + safezoneY";
			w="0.15 * safezoneW";
			h="0.04 * safezoneH";
			colorText[]={0,0,0,0};
			colorBackground[]={0,0,0,0};
			colorActive[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			onButtonClick="connectToServer ['149.202.89.63', 3302, ''];";
			tooltip="Join the MGT Malden Exile Server";
		};
		class chernoServerBtn: RscButton
		{
			idc=1603;
			x="0.85 * safezoneW + safezoneX";
			y="0.90 * safezoneH + safezoneY";
			w="0.15 * safezoneW";
			h="0.04 * safezoneH";
			colorText[]={0,0,0,0};
			colorBackground[]={0,0,0,0};
			colorActive[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			onButtonClick="connectToServer ['188.165.198.127', 3302, ''];";
			tooltip="Join the MGT Chernarus Exile Server";
		};
	};
	class ControlsBackground
	{
		class joinServerBack: IGUIBack
		{
			idc=2201;
			x="0.85 * safezoneW + safezoneX";
			y="0.72 * safezoneH + safezoneY";
			w="0.15 * safezoneW";
			h="0.1 * safezoneH";
		};
		class backgroundPicture: RscPicture
		{
			idc=5001;
			text="mgtmenu\data\background.paa";
			x="0 * safezoneW + safezoneX";
			y="0 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="1 * safezoneH";
		};
	};
};
class RscDisplayStart : RscStandardDisplay {
	class controls {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\mgtmenu\data\backgroundloading.paa";
		};
	};
};
