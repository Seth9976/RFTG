// 函数名称: sub_470620
// 虚拟地址: 0x470620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_470620(int32_t arg1, void* arg2, int128_t* arg3, uint32_t arg4, int32_t* arg5, int32_t* arg6, int32_t arg7)
{
    // 第一条实际指令: void var_4c
    void var_4c
    int32_t eax_1 = __security_cookie ^ &var_4c
    int32_t edi = *arg6
    int128_t* var_48 = arg5
    
    if (edi != 1 || *arg5 != 0xffffffff)
        int128_t* var_5c_1 = arg3
        
        if (sub_470510(arg4, arg2, arg5, edi, arg3, arg4) == 0)
            void* eax_4 = sub_46b2b0(arg4)
            *(eax_4 + 0x1c) = 0xf
            *(eax_4 + 0x1a08) = *arg6
            *(eax_4 + 0x1f38) = arg7 != 0
            int32_t edx = *arg6
            sub_46aca0(eax_4 + 0xaa4, edx, var_48, edx)
            sub_5ab990(eax_4 + 0xfc4, var_48, *arg6 * 4)
            sub_5ab990(eax_4 + 0x14e4, arg3, *arg6 * 4)
            bool cond:1 = *(eax_4 + 0x1f38) == 0
            *(eax_4 + 0x1a04) = *arg6
            void* esi_3
            void var_3c
            
            if (cond:1)
                esi_3 = *(data_27e7a40 + 0x548)
                
                if (*(esi_3 + 0x2c078) == 1 && *(esi_3 + 0x210) == 0)
                    sub_4d6480(data_307bef0)
                    sub_4d66f0(&var_3c)
                
                *(esi_3 + 0x210) = 6
            else
                esi_3 = *(data_27e7a40 + 0x548)
                
                if (*(esi_3 + 0x2c078) == 1 && *(esi_3 + 0x210) == 0)
                    sub_4d6480(data_307bef0)
                    sub_4d66f0(&var_3c)
                
                *(esi_3 + 0x210) = 2
            *(esi_3 + 0x214) = 0
            *(esi_3 + 0x2c078) = 0
            int128_t* result
            result.b = 0
            sub_5a6aba(eax_1 ^ &var_4c)
            return result
    else
        int32_t var_5c = edi
        sub_469e10(arg2, arg4, 0xd, 0, arg5, edi, arg3, edi)
    
    sub_5a6aba(eax_1 ^ &var_4c)
    return 1
}
