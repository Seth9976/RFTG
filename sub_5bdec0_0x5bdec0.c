// 函数名称: sub_5bdec0
// 虚拟地址: 0x5bdec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bdec0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ecx = __chkstk(0x2008)
    int32_t* ecx = __chkstk(0x2008)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t ebx = arg1
    int32_t* var_200c = ecx
    
    if (arg2 u> 0)
        goto label_5bdf14
    
    int32_t entry_ebx
    
    if (ebx == 0)
    label_5bdef7:
        sub_5a6aba(entry_ebx ^ &__saved_ebp)
        return 0
    
    while (true)
        int32_t edi_1
        
        if (arg2 u> 0 || ebx u> 0x2000)
        label_5bdf14:
            edi_1 = 0x2000
        else
            edi_1 = ebx
        
        void var_2008
        
        if (sub_5c2020(*ecx, &var_2008, edi_1, 0, &ecx[2]) s>= 0
                && sub_5c21e0(var_200c, &var_2008, edi_1, 0) s>= 0)
            int32_t temp0_1 = ebx
            ebx -= edi_1
            int32_t eax_8 = sbb.d(arg2, 0, temp0_1 u< edi_1)
            arg2 = eax_8
            
            if (eax_8 u<= 0)
                if (eax_8 u< 0)
                    break
                
                if (ebx == 0)
                    sub_5a6aba(entry_ebx ^ &__saved_ebp)
                    return 0
            
            ecx = var_200c
            continue
        
        sub_5a6aba(entry_ebx ^ &__saved_ebp)
        return 0xffffffff
    
    goto label_5bdef7
}
