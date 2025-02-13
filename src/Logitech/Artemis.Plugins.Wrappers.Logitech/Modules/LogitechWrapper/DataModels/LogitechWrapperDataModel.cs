﻿using Artemis.Core.Modules;
using SkiaSharp;

namespace Artemis.Plugins.Wrappers.Logitech.Modules.DataModels
{
    public class LogitechWrapperDataModel : DataModel
    {
        public SKColor BackgroundColor { get; set; }
        public LogitechKeysDataModel Keys { get; set; } = new();
        public int Flag { get; internal set; }
        public string FlagHex { get; internal set; }
    }
}