// 函数名称: sub_59b730
// 虚拟地址: 0x59b730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_59b730(void* arg1)
{
    // 第一条实际指令: char* eax = *(arg1 + 0xa8)
    char* eax = *(arg1 + 0xa8)
    
    if (eax u< *(arg1 + 0xac))
    label_59b78d:
        void* ecx_2 = zx.d(*eax)
        void* eax_6 = &eax[1]
        *(arg1 + 0xa8) = eax_6
        
        if (ecx_2 == 0x42)
            if (eax_6 u< *(arg1 + 0xac))
            label_59b7f2:
                ecx_2.b = *eax_6
                *(arg1 + 0xa8) = eax_6 + 1
                
                if (zx.d(ecx_2.b) == 0x4d)
                    sub_595ac0(arg1)
                    sub_595ac0(arg1)
                    sub_595ac0(arg1)
                    sub_595ac0(arg1)
                    sub_595ac0(arg1)
                    sub_595ac0(arg1)
                    uint32_t eax_14 = sub_595ac0(arg1)
                    uint32_t eax_17 = (sub_595ac0(arg1) << 0x10) + eax_14
                    
                    if (eax_17 == 0xc || eax_17 == 0x28 || eax_17 == 0x38 || eax_17 == 0x6c)
                        return 1
            else if (*(arg1 + 0x20) != 0)
                int32_t eax_9
                eax_9, ecx_2 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                
                if (eax_9 != 0)
                    *(arg1 + 0xa8) = arg1 + 0x28
                    *(arg1 + 0xac) = eax_9 + arg1 + 0x28
                else
                    *(arg1 + 0x20) = eax_9
                    char* eax_11 = *(arg1 + 0xac) - 1
                    *(arg1 + 0xa8) = eax_11
                    *eax_11 = 0
                
                eax_6 = *(arg1 + 0xa8)
                goto label_59b7f2
    else if (*(arg1 + 0x20) != 0)
        int32_t eax_2 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_2 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_2 + arg1 + 0x28
        else
            *(arg1 + 0x20) = eax_2
            char* eax_4 = *(arg1 + 0xac) - 1
            *(arg1 + 0xa8) = eax_4
            *eax_4 = 0
        
        eax = *(arg1 + 0xa8)
        goto label_59b78d
    
    return 0
}
