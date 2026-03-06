// 函数名称: sub_43ec10
// 虚拟地址: 0x43ec10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_43ec10(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696e21
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_54c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi = arg1
    char* edx
    
    if ((data_3166354 & 1) == 0)
        data_3166354.d |= 1
        int32_t var_8_1 = 0
        char const* const var_550_1 = "ui_zoom_card"
        int32_t eax_4
        eax_4, arg1, edx = sub_510710(data_307ca78, edx)
        data_3166350 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166354 & 2) == 0)
        data_3166354.d |= 2
        int32_t var_8_3 = 1
        char const* const var_550_2 = "ui_zoom_goal"
        int32_t eax_6
        eax_6, arg1, edx = sub_510710(data_307ca78, edx)
        data_316634c = eax_6
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166354 & 4) == 0)
        data_3166354.d |= 4
        int32_t var_8_5 = 2
        char const* const var_550_3 = "uiRoleZoom"
        int32_t eax_8
        eax_8, arg1 = sub_510710(data_307ca78, edx)
        data_3166348 = eax_8
        int32_t var_8_6 = 0xffffffff
    
    int128_t* eax_11 = sub_50c830(data_3166350, edi, sub_510b30(arg1, edi))
    int32_t esi_1 = data_316634c
    int32_t ecx_2 = *(eax_11 + 0x5c) + 1
    *(eax_11 + 0x64) = ecx_2
    *(eax_11 + 0x68) = 1
    int32_t eax_12 = sub_510b30(ecx_2, edi)
    int128_t* eax_14 = sub_50c830(esi_1, edi, eax_12)
    int32_t esi_2 = data_3166348
    *(eax_14 + 0x64) = *(eax_14 + 0x5c) + 1
    *(eax_14 + 0x68) = 1
    int128_t* eax_17 = sub_50c830(esi_2, edi, sub_510b30(eax_12, edi))
    *(eax_17 + 0x64) = *(eax_17 + 0x5c) + 1
    void* ecx_7 = data_27e7a40
    *(eax_17 + 0x68) = 1
    char* result = *(ecx_7 + 0x548)
    
    if (*(result + 0xbfac) != 0)
        int32_t* eax_18 = sub_463f60(&result[0x43960], *(result + 0xbfac))
        int32_t ecx_10 = *eax_18
        
        if (ecx_10 == 4)
            int32_t edx_6 = eax_18[0x21]
            data_3166344 = ecx_10
            data_315fbd0 = edx_6
        else if (ecx_10 != 6)
            void* eax_20 = *(data_27e7a40 + 0x548)
            int32_t esi_4 = *(eax_20 + 0xbfac)
            data_3166344 = 0
            data_315fbd0 = *(sub_463f60(eax_20 + 0x43960, esi_4) + 0x7c)
        else
            data_3166344 = ecx_10
        
        int32_t eax_22 = data_3166344
        
        if (eax_22 == 0)
            int128_t* eax_32
            int32_t ecx_15
            eax_32, ecx_15 = sub_510860(data_3166350)
            int128_t* eax_35 = sub_50c830(data_3166350, edi, sub_510b30(ecx_15, edi))
            *(eax_35 + 0x64) = *(eax_35 + 0x5c) + 1
            *(eax_35 + 0x68) = 0
            sub_451b10(eax_32)
            void* eax_36 = sub_4fc3d0(&data_be1cb8, eax_32)
            void* edx_13 = data_27e7a40
            *(eax_36 + 0x2c) = sub_43e900
            void* eax_37 = *(edx_13 + 0x548)
            int32_t* eax_38
            int32_t ecx_20
            eax_38, ecx_20 = sub_463f60(eax_37 + 0x43960, *(eax_37 + 0xbfac))
            
            if (sub_448b40(ecx_20, eax_38) == 0)
                sub_4fa770(eax_32, 9, 1)
            
            char eax_41
            int32_t ecx_21
            eax_41, ecx_21 = sub_448aa0(eax_38)
            
            if (eax_41 == 0)
                sub_4fa770(eax_32, 0x10, 1)
            else
                if ((data_3166354 & 8) == 0)
                    data_3166354.d |= 8
                    int32_t var_8_7 = 3
                    data_3166340 = sub_4f5220(data_307c110, "txtCards")
                    int32_t var_8_8 = 0xffffffff
                
                int32_t var_554_2 = ecx_21
                int32_t eax_44 = sub_418a10()
                void var_534
                sub_49db30(eax_44, eax_44, *(data_27e7a40 + 0x74), &var_534, 5)
                void var_538
                char** eax_45
                char* ecx_24
                eax_45, ecx_24 = sub_4c4ab0(&var_538)
                int32_t var_8_9 = 4
                char* eax_46 = *eax_45
                
                if (eax_46 == 0)
                    eax_46 = &data_83f3d3
                
                int32_t edx_16 = data_3166340
                int32_t var_550_6 = 1
                char* var_554_3 = eax_46
                sub_4f9300(eax_32, edx_16, ecx_24, edx_16.b)
                int32_t var_8_10 = 0xffffffff
                char edx_17 = sub_4c43d0(&var_538)
                int32_t var_550_7 = 0
                sub_4fa4e0(eax_32, data_3166340, edx_17)
            
            if ((data_3166354 & 0x10) == 0)
                data_3166354.d |= 0x10
                int32_t var_8_11 = 5
                data_316633c = sub_4f5220(data_307c110, "btnAction")
                int32_t var_8_12 = 0xffffffff
            
            int32_t eax_51
            char* ecx_27
            char edx_18
            eax_51, ecx_27, edx_18 = sub_459b60()
            
            if (eax_51 == 0)
                int32_t var_550_9 = 1
                sub_4fa4e0(eax_32, data_316633c, edx_18)
                result = sub_446520(eax_38)
            else
                float edx_19 = data_316633c
                int32_t var_550_8 = 0
                int32_t var_558_4 = 1
                int32_t var_55c_1 = eax_51
                sub_4f9300(eax_32, sub_4fa4e0(eax_32, edx_19, edx_19.b), ecx_27, (data_316633c).b)
                result = sub_446520(eax_38)
        else if (eax_22 == 4)
            int32_t eax_27
            int32_t ecx_13
            eax_27, ecx_13 = sub_510860(data_316634c)
            int128_t* eax_30 = sub_50c830(data_316634c, edi, sub_510b30(ecx_13, edi))
            *(eax_30 + 0x64) = *(eax_30 + 0x5c) + 1
            *(eax_30 + 0x68) = 0
            result = sub_4505e0(eax_27)
        else
            result = eax_22 - 6
            
            if (eax_22 != 6)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x3cb4, "ZoomUpdateVR")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    else if (*(result + 0x2c0ac) != 0xffffffff)
        int32_t eax_58 = sub_41da40(*(result + 0x2c0ac))
        int32_t ebx_3 = data_3166348
        int32_t eax_59 = sub_510b30(ecx_7, edi)
        sub_50c830(ebx_3, edi, eax_59)[6].d = eax_58
        result = sub_50c830(data_3166348, edi, sub_510b30(eax_59, edi))
        *(result + 0x64) = *(result + 0x5c) + 1
        result[0x68] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
