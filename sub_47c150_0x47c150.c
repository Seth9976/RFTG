// 函数名称: sub_47c150
// 虚拟地址: 0x47c150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_47c150(int32_t arg1, int32_t arg2, int32_t* arg3, char* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = data_315ff40
    void var_30c
    int32_t result = sub_47bd90(arg3, &var_30c)
    
    if (result s> 0)
        void var_304
        void* esi_1 = &var_304
        int32_t edi_1 = result
        int32_t i
        
        do
            int32_t edx = *(esi_1 - 4)
            char eax_5 = sub_47be30(*(esi_1 - 8), edx, arg4, edx)
            *esi_1
            void* var_330_2 = &arg3[0x2225]
            int32_t eax_7 = eax_5.d
            result = sub_4d7610(eax_7, &arg3[0x2223], arg5.b, eax_7, eax_2, arg5)
            esi_1 += 0xc
            i = edi_1
            edi_1 -= 1
        while (i != 1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
