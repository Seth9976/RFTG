// 函数名称: sub_417700
// 虚拟地址: 0x417700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_417700(int32_t arg1, char* arg2, int32_t* arg3, float* arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    data_307c588
    
    if (sub_4f65a0(&arg2[4], *arg2) != 0)
        void* eax_4 = data_27e7a50
        arg2[0x301] = 1
        arg2[0x2cb] = *(eax_4 + 0x1e)
        void* ebx_1 = &arg2[0x245]
        int32_t i_1 = 0
        void* var_5c_1 = ebx_1
        int32_t i
        
        do
            void var_c4
            int32_t eax_5 = sub_40a930(&var_c4)
            int16_t top = top - 1
            unimplemented  {call 0x40a930}
            int32_t eax_6 = *(ebx_1 - 0xd)
            bool cond:0_1 = *(data_27e7bbc + 0x18) != 0
            void var_4c
            __builtin_memcpy(&var_4c, eax_5, 0x40)
            
            if (cond:0_1)
                int32_t* eax_7 = sub_4f5350(eax_6, &var_4c, *(ebx_1 - 0x11), &var_4c)
                int32_t edx_3 = eax_7[1]
                float var_70 = *eax_7
                int32_t var_6c_1 = edx_3
                int32_t var_68_1 = eax_7[2]
                int32_t var_64_1 = eax_7[3]
                eax_6 = sub_4057a0(&var_70, arg4)
                ebx_1 = var_5c_1
            else
                eax_6.b = 0
            
            void* ecx_5
            ecx_5.b = arg5
            int32_t* edx_6
            edx_6.b = eax_6.b
            int32_t eax_9 =
                sub_505640(*(ebx_1 - 0xd), edx_6.b, ecx_5.b, ebx_1 - 1, *(ebx_1 - 0x11), ebx_1 - 9)
            
            if (*ebx_1 != 0)
                char ecx_6 = *(ebx_1 + 2)
                
                if (ecx_6 == 0 || *(ebx_1 + 3) != 0 || ecx_6 == 0)
                    *arg3 = 0xa
            
            if (eax_9 == 1)
                sub_416b30(i_1, arg2)
            
            i = i_1 + 1
            ebx_1 += 0x1c
            i_1 = i
            var_5c_1 = ebx_1
        while (i s< 8)
        
        sub_416ca0(i, arg4, &arg2[0x14], arg2, arg5, arg3)
        sub_416ca0(arg3, arg4, &arg2[0x124], arg2, arg5, arg3)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
