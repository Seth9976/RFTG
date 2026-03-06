// 函数名称: sub_56e480
// 虚拟地址: 0x56e480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_56e480()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* eax_2 = data_3079270
    int32_t ecx = *(eax_2 + 4)
    
    if (ecx != 0x19)
        if (ecx == 0x18)
            long double x87_r7_4 = fconvert.t(100f)
            void* eax_5 = sub_56ef50(fconvert.s(x87_r7_4), fconvert.s(x87_r7_4))
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_5
        
        if (ecx == 2)
            char** eax_6 = sub_4d4870(eax_2)
            data_3079298 = eax_6[0x1a]
            int128_t** eax_7
            int32_t ecx_9
            eax_7, ecx_9 = sub_4e7410(eax_6[1])
            eax_2 = *eax_7
            
            if (eax_2 != 0 && eax_2[4].d s> 0)
                int32_t var_68_6 = ecx_9
                float var_68_7 = fconvert.s(fconvert.t(0.5f))
                int32_t var_6c_3 = 0
                int32_t var_70 = ecx_9
                float var_70_1 = fconvert.s(float.t(0))
                data_307929c = 0
                int32_t var_74 = 0
                int32_t var_78 = 0
                int32_t var_7c = eax_6[1]
                int32_t eax_8
                int80_t st0_1
                st0_1, eax_8 = sub_516bc0(eax_6, var_7c, var_78, var_74, var_70_1, var_6c_3, var_68_7)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_8
            
            data_307929c = 0xffffffff
    else
        long double x87_r7_1 = fconvert.t(200f)
        float var_1c_1 = fconvert.s(x87_r7_1)
        int32_t var_38_1 = 0
        float var_18_1 = fconvert.s(x87_r7_1)
        int32_t var_34_1 = 0
        float var_14_1 = fconvert.s(float.t(0))
        int32_t var_30_1 = 0
        float var_3c = fconvert.s(float.t(1))
        int32_t var_2c_1 = 0x3f800000
        float var_28_1 = var_1c_1
        float var_24_1 = var_18_1
        float var_20_1 = var_14_1
        void var_5c
        void* var_68_1 = &var_5c
        int32_t* var_6c_1 = eax_2
        __builtin_memcpy(&var_5c, &var_3c, 0x20)
        int32_t* ecx_3
        eax_2, ecx_3 = sub_4eb180(var_6c_1, var_68_1)
        
        if (*(eax_2 + 0x74) != 0)
            *(eax_2 + 0x76) = 1
            int32_t* const var_68_2 = &data_8409a8
            sub_4eb490(eax_2, data_3079270, ecx_3)
            int32_t eax_4
            int80_t st0
            st0, eax_4 = sub_56ee50(data_3079270)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_4
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_2
}
