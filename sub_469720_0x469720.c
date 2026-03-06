// 函数名称: sub_469720
// 虚拟地址: 0x469720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_469720(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_d4
    __builtin_memcpy(&var_d4, arg2 + 0x144, 0x90)
    int32_t i_2 = *(arg2 + 0x140)
    int32_t var_8c = 1
    
    if (i_2 s> 0)
        void var_84
        void* eax_3 = &var_84
        int32_t i
        
        do
            *eax_3 = 4
            eax_3 += 0xc
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int128_t* result = sub_469180()
    int128_t* result_1 = result
    int32_t var_e0 = 0
    
    if (*(arg2 + 0x140) s> 0)
        void* ebx_1 = arg2 + 0xc
        bool cond:0_1
        
        do
            int32_t var_40_1 = *(ebx_1 - 0xc)
            int32_t var_c_1 = *(ebx_1 + 0x20)
            void var_2c
            __builtin_memcpy(&var_2c, ebx_1, 0x20)
            void var_44
            sub_469310(result, &var_44)
            ebx_1 += 0x50
            cond:0_1 = var_e0 + 1 s< *(arg2 + 0x140)
            var_e0 += 1
            result = result_1
        while (cond:0_1)
    
    int32_t i_1 = 0
    
    if (result[0x14].d s> 0)
        int128_t* result_2 = result
        
        do
            if (*result_2 == *(arg1 + 4))
                result_2[3].d = 0
            
            i_1 += 1
            result_2 = &result_2[5]
        while (i_1 s< result[0x14].d)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
