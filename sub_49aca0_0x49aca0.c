// 函数名称: sub_49aca0
// 虚拟地址: 0x49aca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_49aca0(int32_t* arg1 @ edi, int32_t* arg2, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax_1 = *arg2 - 1
    int32_t eax_1 = *arg2 - 1
    int32_t result = 0
    
    if (eax_1 u> 8)
        sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\ai.cpp", 0x26c4, "ai_make_choice_specific")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t* entry_ebx
    
    switch (eax_1)
        case 0
            int32_t eax_2 = arg2[2]
            int32_t var_18 = eax_2
            int32_t eax_3 = sub_49ac30(eax_2, *entry_ebx, arg1, arg3, arg3)
            int32_t eax_4 = arg2[3]
            int32_t var_20 = eax_4
            int32_t eax_5 = sub_49ac30(eax_4, *entry_ebx, arg1, arg3, arg3)
            int32_t eax_6 = arg2[1]
            int32_t var_28 = eax_6
            *arg4 = sub_49ac30(eax_6, *arg5, arg4, arg3, arg3)
            arg1[1] = eax_5
            *arg1 = eax_3
            *entry_ebx = 2
            *arg5 = 1
            return 0
        case 1
            *arg1 = 2
            *entry_ebx = 1
            return 0
        case 2
            *arg1 = 3
            *entry_ebx = 1
            return 0
        case 3
            *arg1 = 5
            *entry_ebx = 1
            return 0
        case 4
            *arg1 = 8
            *entry_ebx = 1
            return 0
        case 5
            *arg1 = 9
            *entry_ebx = 1
            return 0
        case 6, 7
            int32_t var_18_1 = arg2[1]
            result = sub_49ac30(arg3, *entry_ebx, arg1, arg2, arg3)
            *entry_ebx = 0
        label_49adcf:
            
            if (arg5 != 0)
                *arg5 = 0
            
            return result
        case 8
            int32_t ecx_6 = arg2[1]
            int32_t var_18_2 = ecx_6
            *arg1 = sub_49ac30(eax_1, *entry_ebx, arg1, ecx_6, arg3)
            *entry_ebx = 1
            goto label_49adcf
}
