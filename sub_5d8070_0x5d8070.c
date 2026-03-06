// 函数名称: sub_5d8070
// 虚拟地址: 0x5d8070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d8070(int32_t* arg1, int32_t* arg2 @ edi, int32_t* arg3)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t eax = *arg2
        
        if (eax s<= *arg3)
            if (arg2 == arg3)
                *arg1 = 1
                return 0
            
            if (sub_5cd130(arg2[1], arg3[1], eax * 4) == 0)
                *arg1 = 1
                return 0
        
        *arg1 = 0
    
    int32_t var_10_2 = *arg2
    int32_t result = sub_5d0ac0()
    
    if (result == 0)
        sub_5cd050(result)
        return 0
    
    char* i = nullptr
    
    if (*arg2 s> 0)
        do
            int32_t ecx_3 = arg2[1]
            char* eax_7 = ecx_3 + (i << 2)
            i[result] = sub_5d7d20(arg3, *eax_7, eax_7[1], eax_7[2], *(ecx_3 + (i << 2) + 3))
            i = &i[1]
        while (i s< *arg2)
    
    return result
}
