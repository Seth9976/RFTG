// 函数名称: sub_502ce0
// 虚拟地址: 0x502ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_502ce0(int32_t arg1, int32_t* arg2, char* arg3, char* arg4, char* arg5, char* arg6, void* arg7)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f050
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* ebx = arg3
    int32_t eax_4 = *(ebx + 0x10) - 1
    char* const var_54
    char* var_48
    char** var_18
    char* const var_14
    int32_t edx
    char* esi_2
    
    if (eax_4 u> 0xf)
    label_502e9c:
        uint32_t var_1c
        
        if (ebx == data_315f6b8)
            char** eax_17 = arg2[1]
            esi_2 = arg4
            var_1c = *arg2
            var_48 = &var_1c
            var_18 = eax_17
            edx = sub_502420(esi_2, arg5, var_48)
            goto label_50311c
        
        uint32_t var_20
        
        if (ebx == data_315f6bc || ebx == data_315f7e8 || ebx == data_30d72f8 || ebx == data_315f6dc)
            uint32_t eax_30 = arg2[1]
            char** ecx_29 = arg2[2]
            esi_2 = arg4
            var_20 = *arg2
            var_1c = eax_30
            var_48 = &var_20
            var_18 = ecx_29
            edx = sub_5024b0(esi_2, arg5, var_48)
        else
            uint32_t var_24
            
            if (ebx == data_315f6c0 || ebx == data_30d72f0 || ebx == data_315f6e4)
                uint32_t ecx_27 = arg2[2]
                uint32_t edx_22 = *arg2
                esi_2 = arg4
                var_20 = arg2[1]
                var_1c = ecx_27
                var_48 = &var_24
                var_24 = edx_22
                var_18 = arg2[3]
                edx = sub_502540(esi_2, arg5, var_48)
            else if (ebx == data_315f6c4)
                int32_t ecx_13 = arg2[1]
                uint32_t edx_9 = arg2[2]
                esi_2 = arg4
                int32_t var_2c = *arg2
                int32_t var_28_1 = ecx_13
                uint32_t ecx_14 = arg2[4]
                var_20 = arg2[3]
                var_1c = ecx_14
                var_48 = &var_2c
                var_24 = edx_9
                var_18 = arg2[5]
                edx = sub_5025e0(esi_2, arg5, var_48)
            else if (ebx == data_315f6c8)
                void var_34
                var_48 = &var_34
                __builtin_memcpy(&var_34, arg2, 0x20)
                esi_2 = arg4
                edx = sub_502690(esi_2, arg5, var_48)
            else if (ebx == data_30d72f4)
                int32_t eax_21 = *arg2
                esi_2 = arg4
                var_24 = zx.d(eax_21.b)
                var_20 = zx.d((eax_21 u>> 8).b)
                var_18 = eax_21 u>> 0x18
                var_48 = &var_24
                var_1c = zx.d((eax_21 u>> 0x10).b)
                edx = sub_502750(esi_2, arg5, var_48)
            else if (ebx == data_315f6d4 || ebx == data_315f6e8)
                uint32_t ecx_25 = arg2[2]
                uint32_t edx_20 = *arg2
                esi_2 = arg4
                var_20 = arg2[1]
                var_1c = ecx_25
                var_48 = &var_24
                var_24 = edx_20
                var_18 = arg2[3]
                edx = sub_502750(esi_2, arg5, var_48)
            else
                esi_2 = arg4
                
                if (ebx == data_30d72fc)
                    arg3.w = *arg2
                    var_14.w = arg3.w
                    var_1c = zx.d(var_14:1.b)
                    var_48 = &var_20
                    var_20 = zx.d(arg3.b)
                    var_18 = zx.d(*(arg2 + 2))
                    sub_502c80(esi_2, sub_5027e0(esi_2, arg5, var_48), arg6)
                
                if (ebx != data_315f6d0)
                    if (ebx != data_315f6cc)
                        var_48 = "DefParseTreeMakeFromDefinitionArrayableField"
                        int32_t var_4c_18 = 0x6ba
                        char const* const var_50_17 = "DefParseTree.cpp"
                        var_54 = &data_83f3d3
                        sub_4c5870("Halt", var_54, var_50_17, var_4c_18, var_48)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    char** edx_19 = arg2[1]
                    var_1c = *arg2
                    var_48 = &var_1c
                    var_18 = edx_19
                    edx = sub_502870(esi_2, arg5, var_48)
                else
                    uint32_t eax_25 = arg2[1]
                    char** ecx_22 = arg2[2]
                    var_20 = *arg2
                    var_1c = eax_25
                    var_48 = &var_20
                    var_18 = ecx_22
                    edx = sub_5027e0(esi_2, arg5, var_48)
        goto label_50311c
    
    char* eax_6
    char* ecx_1
    
    switch (eax_4)
        case 0
            var_48 = arg6
            edx = sub_502b60(arg7, arg2.b, arg2, arg5, arg4, var_48.b)
            ecx_1 = arg6
            eax_6 = arg4
        label_503121:
            int32_t eax_32 = sub_502c80(eax_6, edx, ecx_1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_32
        case 1
            esi_2 = arg4
            var_48 = sx.d(*arg2)
            edx = sub_502220(esi_2, arg5, var_48)
            goto label_50311c
        case 2
            esi_2 = arg4
            var_48 = sx.d(*arg2)
            edx = sub_502220(esi_2, arg5, var_48)
            goto label_50311c
        case 3
            long double x87_r7_1 = fconvert.t(*arg2)
            esi_2 = arg4
            var_48 = arg3
            var_48 = fconvert.s(x87_r7_1)
            edx = sub_5023a0(esi_2, arg5, var_48)
        label_50311c:
            eax_6 = esi_2
            ecx_1 = arg6
            goto label_503121
        case 4, 5, 6, 8, 0xa, 0xb, 0xc
            goto label_502e9c
        case 7
            esi_2 = arg4
            var_48 = *arg2
            edx = sub_5021a0(esi_2, arg5, var_48)
            goto label_50311c
        case 9
            if (*arg2 == 0)
                var_48 = nullptr
                edx = sub_502220(arg4, arg5, var_48)
                eax_6 = arg4
            else
                var_48 = 1
                edx = sub_502220(arg4, arg5, var_48)
                eax_6 = arg4
            
            ecx_1 = arg6
            goto label_503121
        case 0xd
            int32_t* ecx_3 = arg2[1]
            int32_t edx_2 = *arg2
            esi_2 = arg4
            var_48 = ecx_3
            var_54 = esi_2
            edx = sub_5022a0(arg5, edx_2, ecx_3, var_54, arg5, edx_2, var_48)
            goto label_50311c
        case 0xe
            void* edi_2 = *arg2
            char* const eax_12 = &data_83f3d3
            var_14 = &data_83f3d3
            int32_t var_8_1 = 0
            
            if (edi_2 != 0)
                var_48 = arg3
                var_18 = &var_48
                sub_4c4300(&var_48, edi_2 + 0x20)
                var_48 = sub_4e6920(&var_18)
                var_8_1.b = 1
                sub_4c4510(var_48)
                var_8_1.b = 0
                sub_4c43d0(&var_18)
                eax_12 = var_14
                
                if (eax_12 == 0)
                    eax_12 = &data_83f3d3
            
            var_48 = eax_12
            sub_502c80(arg4, sub_5021a0(arg4, arg5, var_48), arg6)
            int32_t var_8_2 = 0xffffffff
            int32_t* eax_15 = sub_4c43d0(&var_14)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_15
        case 0xf
            int32_t* ecx_2 = arg5
            esi_2 = arg4
            int32_t var_4c
            var_4c.q = fconvert.d(fconvert.t(*arg2))
            char* var_50_2 = ecx_2
            var_54 = esi_2
            edx = sub_502320(eax_4, arg2, ecx_2, var_54, var_50_2, var_4c)
            goto label_50311c
}
