// 函数名称: sub_49b390
// 虚拟地址: 0x49b390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_49b390(int32_t arg1)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t eax_1 = sub_49b2f0(eax)
    int32_t result = sub_49b2f0(arg1)
    
    if (eax_1 != result)
        void* eax_3 = sub_437c30()
        *(eax_3 + 0x28) = 0xffffffff
        *(eax_3 + 0x2c) = 0xffffffff
        *eax_3 = 0x27
        *(eax_3 + 0x3c) = 0
        *(eax_3 + 0x30) = result
        *(eax_3 + 4) = 0xffffffff
        int32_t eax_4 = sub_41d070()
        
        if (*(eax_3 + 0x30) != eax_4)
            sub_4c5870("action.phase == GetCurrentGamePhase()", &data_83f3d3, "..\code\RFTGClient.cpp", 
                0x2ca7, "UIActionQueue")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_6 = data_27e7a40
        *(eax_3 + 8) = 1
        bool cond:0_1 = *(*(eax_6 + 0x548) + 0x2c068) != 0
        *(eax_3 + 0x14) = 0xffffffff
        eax_6.b = cond:0_1
        int32_t eax_7 = data_bebce4
        *(eax_3 + 0xc) = eax_7
        result = eax_7 + 1
        *(eax_3 + 0x38) = zx.d(eax_6.b)
        data_bebce4 = result
        *(eax_3 + 0x34) = 0
    
    return result
}
