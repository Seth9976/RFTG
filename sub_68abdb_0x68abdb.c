// 函数名称: sub_68abdb
// 虚拟地址: 0x68abdb
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68abdb(int32_t arg1, int32_t* arg2, int16_t* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t ecx_1 = zx.d(*arg3)
    int32_t eax_3 = *arg2
    int32_t edi
    int32_t var_a0 = edi
    uint32_t var_98 = ecx_1
    int32_t var_94_1
    
    if (eax_3 == 1)
    label_68ac6a:
        var_94_1 = 8
    label_68ac7f:
        
        if (sub_5b48d1(var_94_1, &arg2[6], ecx_1.b) == 0)
            int32_t var_50
            
            if (arg1 == 0x10 || arg1 == 0x16 || arg1 == 0x1d)
                double var_60_1 = fconvert.d(fconvert.t(*(arg2 + 0x10)))
                int32_t var_50_2 = (var_50 & 0xffffffe3) | 3
            else
                int32_t var_50_1 = var_50 & 0xfffffffe
            void var_90
            sub_5b48ae(&var_90, &var_98, var_94_1.b, arg1, &arg2[2], &arg2[6])
            noreturn
    else
        if (eax_3 == 2)
            var_94_1 = 4
            goto label_68ac7f
        
        if (eax_3 == 3)
            var_94_1 = 0x11
            goto label_68ac7f
        
        if (eax_3 == 4)
            var_94_1 = 0x12
            goto label_68ac7f
        
        if (eax_3 == 5)
            goto label_68ac6a
        
        if (eax_3 == 7)
            *arg2 = 1
        else if (eax_3 == 8)
            var_94_1 = 0x10
            goto label_68ac7f
    int16_t x87control
    sub_5b4e31(x87control, var_98.w, 0xffff)
    
    if (*arg2 != 8 && data_8b9230 == 0)
        int32_t* var_a4_3 = arg2
        sub_5b9ed4()
    
    int32_t result = sub_5b4ab5(*arg2)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
