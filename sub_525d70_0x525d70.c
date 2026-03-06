// 函数名称: sub_525d70
// 虚拟地址: 0x525d70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_525d70(void* arg1)
{
    // 第一条实际指令: int32_t eax_2 = *(arg1 + 0x15cc)
    int32_t eax_2 = *(arg1 + 0x15cc)
    
    if (eax_2 u> 4)
        sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x90b, "UI2AcceptsClicks")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_4c5a30() __tailcall
        
        breakpoint
    
    switch (eax_2)
        case 0
            int32_t eax = *(arg1 + 0x14c0)
            
            if (eax == 3)
                int32_t eax_1
                eax_1.b = *(arg1 + 0x1580) != 0
                return eax_1
            
            if (eax == 5)
                eax_2.b = 1
                return eax_2
            
            eax_2.b = 0
            return eax_2
        case 1, 3, 4
            eax_2.b = 0
            return eax_2
        case 2
            eax_2.b = 1
            return eax_2
}
