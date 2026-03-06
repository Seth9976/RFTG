// 函数名称: sub_530010
// 虚拟地址: 0x530010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_530010(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692808
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_48 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    
    if (arg3 != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = sub_530500(arg3, arg3)
        
        if (ebx_1[0x530] == 3 && ebx_1[0x560].b != 0)
            eax_3 = sub_525d70(ebx_1)
        
        if (ebx_1[0x530] == 3 && ebx_1[0x560].b != 0 && eax_3.b != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** var_38 = nullptr
            int32_t var_34_1 = 0
            int32_t var_30_1 = 0
            int32_t var_2c_1 = 0
            char* const eax_4 = ebx_1[0x571]
            
            if (eax_4 == 0)
                eax_4 = &data_83f3d3
            
            bool cond:0_1 = *(arg4 + 0x325) == 0
            int32_t ecx_1 = ebx_1[0x17]
            char* const var_34_2 = eax_4
            var_38 = ebx_1[0x677]
            int32_t var_30_2 = ecx_1
            
            if (not(cond:0_1))
                struct _EXCEPTION_REGISTRATION_RECORD*** var_4c_1 = &var_38
                int32_t* ecx_2
                eax_3, ecx_2 = sub_52ffe0(ebx_1, &var_38)
                
                if (data_be1ef4 != arg3)
                    void* var_4c_2 = arg4 + 0x310
                    sub_52ba40(eax_3, arg3, ecx_2)
            else if (*(arg4 + 4) != 0)
                int32_t eax_6
                int80_t st0
                st0, eax_6 = sub_506480(&ebx_1[0x518], 1, arg4 + 0x310)
                eax_6.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_6
        else if (ebx_1[0x530] == 5 && ebx_1[0x544].b == 0 && sub_525d70(ebx_1).b != 0)
            char eax_7
            int32_t edx_3
            eax_7, edx_3 = sub_4d7170(&data_be1ea4, arg4 + 0x210)
            void var_18
            int32_t edx_5
            void* esi_4
            
            if (eax_7 == 0)
                char eax_14
                eax_14, edx_5 = sub_4d7170(arg4 + 0x210, arg4 + 0x110)
                
                if (eax_14 == 0)
                    esi_4 = arg4
                else
                    esi_4 = arg4
                    char** ecx_16 = &var_18
                    int32_t* edx_7
                    
                    if (*(esi_4 + 4) == 0)
                        edx_7 = sub_4c4330("mouse_over", edx_5, ecx_16)
                        int32_t var_8_7 = 2
                        void* var_4c_8 = &var_18
                    else
                        edx_7 = sub_4c4330("mouse_down", edx_5, ecx_16)
                        int32_t var_8_5 = 1
                        void* var_4c_7 = &var_18
                    
                    sub_528650(ebx_1, 0xffffffff, edx_7)
                    int32_t var_8_6 = 0xffffffff
                    edx_5 = sub_4c43d0(&var_18)
            else
                void* var_4c_4 = &var_18
                int32_t var_8_1 = 0
                sub_528650(ebx_1, 0xffffffff, sub_4c4330("mouse_over", edx_3, &var_18))
                int32_t var_8_2 = 0xffffffff
                edx_5 = sub_4c43d0(&var_18)
                esi_4 = arg4
            
            struct _EXCEPTION_REGISTRATION_RECORD** var_28 = nullptr
            int32_t var_24_1 = 0
            int32_t var_20_1 = 0
            int32_t var_1c_1 = 0
            char* const eax_9 = ebx_1[0x571]
            
            if (eax_9 == 0)
                eax_9 = &data_83f3d3
            
            bool cond:2_1 = *(esi_4 + 0x325) == 0
            int32_t ecx_11 = ebx_1[0x17]
            char* const var_24_2 = eax_9
            var_28 = ebx_1[0x677]
            int32_t var_20_2 = ecx_11
            
            if (not(cond:2_1) && ebx_1[0x572].b != 0)
                void* var_4c_5 = &var_18
                int32_t var_8_3 = 3
                sub_528650(ebx_1, 0xffffffff, sub_4c4330("mouse_clicked", edx_5, &var_18))
                int32_t var_8_4 = 0xffffffff
                sub_4c43d0(&var_18)
                struct _EXCEPTION_REGISTRATION_RECORD*** var_4c_6 = &var_28
                sub_52ffe0(ebx_1)
                void* eax_12
                eax_12.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_12
            
            if ((*(esi_4 + 0x326) != 0 || *(esi_4 + 0x327) != 0) && ebx_1[0x572].b == 0)
                void* var_4c_9 = &var_18
                int32_t var_8_8 = 4
                sub_528650(ebx_1, 0xffffffff, sub_4c4330("mouse_clicked", edx_5, &var_18))
                int32_t var_8_9 = 0xffffffff
                sub_4c43d0(&var_18)
                
                if (*(esi_4 + 0x328) != 0)
                    int32_t var_1c_2 = 2
                else if (*(esi_4 + 0x327) != 0)
                    int32_t var_1c_3 = 1
                
                struct _EXCEPTION_REGISTRATION_RECORD*** var_4c_10 = &var_28
                sub_52ffe0(ebx_1, &var_28)
                void* eax_18
                eax_18.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_18
    
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3
}
