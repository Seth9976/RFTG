// 函数名称: sub_422570
// 虚拟地址: 0x422570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_422570(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    
    if (arg1 u> 9)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb33, "PhaseButtonToPhase")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t esi
    
    switch (arg1)
        case 0
            esi = 0xa
        label_42258b:
            
            if (sub_41eb70(esi) != 0)
                return 1
            
            int32_t eax_1 = sub_419400(&var_8)
            
            if (eax_1.b != 0 && *(data_27e7a54 + 0x204) s<= 1)
                return sbb.d(eax_1, eax_1, 3 u< esi - 1) + 1
            
            return sbb.d(4, 4, 4 u< esi - 1) + 1
        case 1, 7
            arg1.b = 0
            return arg1
        case 2
            esi = 1
            goto label_42258b
        case 3
            esi = 2
            goto label_42258b
        case 4
            esi = 8
            goto label_42258b
        case 5
            esi = 3
            goto label_42258b
        case 6
            esi = 9
            goto label_42258b
        case 8
            esi = 4
            goto label_42258b
        case 9
            esi = 5
            goto label_42258b
}
