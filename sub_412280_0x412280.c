// 函数名称: sub_412280
// 虚拟地址: 0x412280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_412280()
{
    // 第一条实际指令: if (*(data_27e7fd0 + 0x27) != 0 && data_30785cc != 5)
    if (*(data_27e7fd0 + 0x27) != 0 && data_30785cc != 5)
        if (data_26a4601 != 0)
            sub_4c5870("gVR.disableHeadTracking == false", &data_83f3d3, "..\code\LoadingScreen.cpp", 
                0x61, "LoadingGameScreenShow")
            
            if (IsDebuggerPresent() != 1)
                noreturn sub_4c5a30() __tailcall
            
            breakpoint
        
        data_26a4601 = 1
    
    *(data_27e7a70 + 0x64) = 5
    return 5
}
