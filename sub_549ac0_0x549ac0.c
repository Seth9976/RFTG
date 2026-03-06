// 函数名称: sub_549ac0
// 虚拟地址: 0x549ac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __thiscallsub_549ac0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = sub_54b850(data_307882c + 0x4240, arg2)
    
    if (*(arg1 + 0x5030) == 0)
        int32_t eax_3 = *eax_2
        int32_t edi_1 = 0
        int32_t var_1c = 0
        int32_t var_18[0x4]
        data_30794bc(eax_3, 4, &var_1c, &var_18)
        
        if (var_1c s> 0)
            do
                data_30794a0(var_18[edi_1])
                edi_1 += 1
            while (edi_1 s< var_1c)
        
        data_307949c(eax_3)
    
    void* eax_5 = data_307882c
    
    if (*(eax_5 + 0x404c) == arg2)
        *(eax_5 + 0x404c) = 0xffffffff
    
    int32_t ecx_3 = *(eax_5 + 0x424c)
    *(eax_5 + 0x424c) = zx.d(eax_2[0x52].w)
    eax_2[0x52] = ecx_3
    *(eax_5 + 0x4250) -= 1
    void* result = sub_545f10(arg2)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
