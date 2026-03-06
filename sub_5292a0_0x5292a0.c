// 函数名称: sub_5292a0
// 虚拟地址: 0x5292a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5292a0()
{
    // 第一条实际指令: float* ecx = __chkstk(0x105c)
    float* ecx = __chkstk(0x105c)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t edx = data_30d74ec
    float* esi = ecx
    int32_t var_1034
    int32_t* var_14 = &var_1034
    int32_t eax_2 = data_30da51c
    int32_t var_100c[0x3fc]
    int32_t (* var_18)[0x3fc] = &var_100c
    float* var_1048 = esi
    var_1034 = 0
    int32_t result
    int32_t ecx_1
    result, ecx_1 = sub_529040(eax_2, edx, &data_30d951c, edx, var_18, var_14)
    int32_t result_1 = 0
    
    if (var_1034 s> 0)
        while (true)
            int32_t* eax_4 = sub_530500(ecx_1, var_100c[result_1])
            long double x87_r7_3 = fconvert.t(eax_4[0x533])
            float var_102c = fconvert.s(fconvert.t(eax_4[0x532]) + fconvert.t(*esi))
            float var_1028_1 = fconvert.s(x87_r7_3 + fconvert.t(esi[1]))
            float var_1024_1 = fconvert.s(fconvert.t(eax_4[0x534]) + fconvert.t(*esi))
            float var_1020_1 = fconvert.s(fconvert.t(eax_4[0x535]) + fconvert.t(esi[1]))
            void var_105c
            int32_t* eax_6 = sub_413110(&var_102c, &var_105c)
            int32_t var_101c = *eax_6
            int32_t var_1018_1 = eax_6[1]
            int32_t* edx_4 = eax_6[2]
            int32_t* var_1014_1 = edx_4
            int32_t var_1010_1 = eax_6[3]
            int32_t* var_14_1 = &var_101c
            ecx_1 = sub_5291f0(eax_4, edx_4)
            result = result_1 + 1
            result_1 = result
            
            if (result s>= var_1034)
                break
            
            esi = var_1048
    
    int32_t entry_ebx
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
    return result
}
