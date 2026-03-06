// 函数名称: sub_486270
// 虚拟地址: 0x486270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_486270(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6906ee
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_34
    int32_t eax_2 = __security_cookie ^ &var_34
    int32_t __saved_edi
    int32_t var_44 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi = *(((*arg1 + (arg1[1] << 1) + (data_307d9d0 << 2)) << 2) + &data_307d9d4)
    
    if ((data_3165204 & 1) == 0)
        data_3165204.d |= 1
        int32_t var_c_1 = 0
        data_3165200 = sub_4f5220(data_307c54c, "btnTrash")
        int32_t var_c_2 = 0xffffffff
    
    if (arg2 != data_3165200)
        void* ebx_3 = edi * 0x1f8 + data_27e7a40
        int32_t esi_4 = *(ebx_3 + 0xcb4)
        
        if (esi_4 == 2)
            if (sub_413990(ebx_3 + 0xad8) == 0)
                if (esi_4 == 2 || esi_4 == 3)
                    goto label_486566
                
                goto label_4864d4
            
            data_30d6f3c = data_307c1a4
            sub_416690(edi, 1)
        else if (esi_4 == 3)
        label_486566:
            int32_t var_48_4 = *(ebx_3 + 0xcac)
            data_30d6f3c = data_307ca34
            sub_402260()
        else
        label_4864d4:
            sub_407670()
            data_307cd0c = 1
            data_307d080 = 3
            data_307d084 = edi
            data_307d088 = 2
            data_307d06d = 1
            data_307d051 = 0
            char* i = &data_307cdce
            
            do
                *i = 0
                i = &i[0x1c]
            while (i s< &data_307d088:2)
            
            sub_40c7a0(&data_307cd0c)
            int32_t ecx_10 = 0
            char* i_1 = &data_307cdce
            
            do
                if (ecx_10 s< 0x10 || ecx_10 s> 0x16)
                    *i_1 = 1
                
                i_1 = &i_1[0x1c]
                ecx_10 += 1
            while (i_1 s< &data_307d088:2)
            
            sub_4075c0()
            data_30d6f38 = data_307c16c
    else
        void* ebx = data_27e7a40
        int32_t esi_1 = edi * 0x1f8
        int32_t eax_10 = *(esi_1 + ebx + 0xcb4)
        int32_t var_30 = edi
        int32_t var_2c_1 = 2
        int32_t var_28
        void* ecx_4
        int32_t** edx_3
        
        if (eax_10 == 3)
            sub_475310(edi)
            void* eax_11 = data_27e7a40
            void* ecx_3 = *(eax_11 + 0x28)
            
            if (ecx_3 == 0)
                sub_405420(&var_30)
            else
                int32_t** edx_2 = data_27e7bb8
                uint32_t eax_12 = zx.d(ecx_3.w)
                
                if (eax_12 u>= edx_2[1])
                    sub_405420(&var_30)
                else
                    void* eax_14 = &(*edx_2)[eax_12 * 0x13]
                    
                    if (*(eax_14 + 0x48) != ecx_3)
                        sub_405420(&var_30)
                    else
                        int32_t* var_48_1 = &var_28
                        void* var_4c_2 = eax_14 + 0x3c
                        int32_t var_24_1 = 4
                        int32_t var_20_1 = 0xf4265
                        var_28 = 0xfeedface
                        ecx_4, edx_3 = sub_4c72b0(0xc, edx_2, ecx_3)
                        void* var_50_1 = esi_1 + eax_11 + 0xcac
                        void* var_54_1 = eax_14 + 0x3c
                        sub_4c72b0(4, edx_3, ecx_4)
                        sub_405420(&var_30)
        else if (eax_10 == 4 || eax_10 == 6)
            void* ecx_7 = *(ebx + 0x28)
            
            if (ecx_7 == 0)
                sub_405420(&var_30)
            else
                int32_t** edx_5 = data_27e7bb8
                uint32_t eax_19 = zx.d(ecx_7.w)
                
                if (eax_19 u>= edx_5[1])
                    sub_405420(&var_30)
                else
                    void* eax_21 = &(*edx_5)[eax_19 * 0x13]
                    
                    if (*(eax_21 + 0x48) != ecx_7)
                        sub_405420(&var_30)
                    else
                        int32_t* var_48_3 = &var_28
                        void* var_4c_3 = eax_21 + 0x3c
                        int32_t var_24_2 = 4
                        int32_t var_20_2 = 0xf4262
                        var_28 = 0xfeedface
                        ecx_4, edx_3 = sub_4c72b0(0xc, edx_5, ecx_7)
                        void* var_50_2 = esi_1 + ebx + 0xcac
                        void* var_54_2 = eax_21 + 0x3c
                        sub_4c72b0(4, edx_3, ecx_4)
                        sub_405420(&var_30)
        else
            uint32_t eax_16 = sub_413990(esi_1 + ebx + 0xad8)
            
            if (eax_16.b == 0)
                data_30d6f3c = data_307c1a0
                data_307db18 = 1
                data_307db08 = 1
                data_307db14 = edi
            else
                sub_4c75d0(eax_16, esi_1 + ebx + 0xcac, *(ebx + 0x28), 4, 0xf4264, esi_1 + ebx + 0xcac)
                sub_405420(&var_30)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_34)
    return 0
}
