// 函数名称: sub_53ccb0
// 虚拟地址: 0x53ccb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_53ccb0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68eeb0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_307885c != 0)
        int32_t* esi_1 = data_3079208
        int32_t var_30_1 = esi_1[1]
        char* lpCaption = arg1
        char* lpCaption_1 = esi_1[8]
        int32_t* var_18 = &lpCaption
        lpCaption = lpCaption_1
        
        if (lpCaption_1 != 0 && *lpCaption_1 != 0)
            void* eax_5 = sub_4c4060(&lpCaption)
            *(eax_5 + 4) += 1
        
        sub_51f6d0(&var_18, lpCaption)
        int32_t var_8_1 = 0
        int32_t* eax_6 = var_18
        
        if (eax_6 == 0)
            eax_6 = &data_83f3d3
        
        int32_t* var_30_2 = eax_6
        lpCaption = "Do you want to save '%s'?"
        char* lpText_1
        sub_4c4a50(&lpText_1, lpCaption)
        var_8_1.b = 1
        char* const lpText = lpText_1
        
        if (lpText == 0)
            lpText = &data_83f3d3
        
        enum MESSAGEBOX_STYLE uType = MB_YESNOCANCEL
        lpCaption = "Asset Modified"
        enum MESSAGEBOX_RESULT eax_8
        char* ecx
        eax_8, ecx = MessageBoxA(data_3078818, lpText, lpCaption, uType)
        
        if (eax_8 != IDYES)
            if (eax_8 == IDCANCEL)
            label_53cd74:
                var_8_1.b = 0
                sub_4c43d0(&lpText_1)
                int32_t var_8_2 = 0xffffffff
                sub_4c43d0(&var_18)
                int32_t* eax_10
                eax_10.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_10
            
            if (eax_8 == IDNO)
                data_307885c = 0
                esi_1[7] -= 1
                sub_508cd0(esi_1)
                
                if (*esi_1 == 0)
                    char var_30_3 = 1
                    lpCaption = nullptr
                    sub_5094d0(esi_1, lpCaption, var_30_3)
                
                esi_1[7] += 1
        else if (sub_542a90(ecx) == 0)
            goto label_53cd74
        
        var_8_1.b = 0
        char* lpText_2 = lpText_1
        
        if (lpText_2 != 0 && *lpText_2 != 0)
            void* eax_12 = sub_4c4060(&lpText_1)
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_3 = *(eax_12 + 0xc) + 0x10
                sub_4f4430(eax_12, sub_4f4380(esi_3), esi_3)
        
        int32_t var_8_3 = 0xffffffff
        int32_t* eax_15 = var_18
        
        if (eax_15 != 0 && *eax_15 != 0)
            void* eax_17 = sub_4c4060(&var_18)
            int32_t temp1_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_5 = *(eax_17 + 0xc) + 0x10
                sub_4f4430(eax_17, sub_4f4380(esi_5), esi_5)
    
    sub_5439b0()
    struct _EXCEPTION_REGISTRATION_RECORD** eax_20
    eax_20.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_20
}
