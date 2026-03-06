// 函数名称: sub_40c6f0
// 虚拟地址: 0x40c6f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_40c6f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[1] - 1
    int32_t eax = arg1[1] - 1
    
    if (eax u> 3)
        sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x12e, "GameDescGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
    else
        switch (eax)
            case 0, 3
                sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x127, "GameDescGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
            case 1
                return *arg1 * 0x1f8 + data_27e7a40 + 0xad8
            case 2
                return *arg1 * 0x1f8 + data_27e7a40 + 0x2c4968
    
    noreturn sub_4c5a30() __tailcall
}
