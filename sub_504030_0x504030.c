// 函数名称: sub_504030
// 虚拟地址: 0x504030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_504030(int32_t arg1, int32_t arg2, char* arg3, char* arg4, struct _EXCEPTION_REGISTRATION_RECORD** arg5, void* arg6, char* arg7, char* arg8)
{
    // 第一条实际指令: char* var_c = arg3
    char* var_c = arg3
    sub_4c42b0(&var_c, "UI2StateOverride")
    char* eax = var_c
    
    if (eax != 0 && *eax != 0)
        void* eax_2 = sub_4c4060(&var_c)
        int32_t temp0_1 = *(eax_2 + 4)
        *(eax_2 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_2 + 0xc) + 0x10
            sub_4f4430(eax_2, sub_4f4380(esi_2), esi_2)
    
    sub_4c42b0(&var_c, "personas")
    char* eax_5 = var_c
    
    if (eax_5 != 0 && *eax_5 != 0)
        void* eax_7 = sub_4c4060(&var_c)
        int32_t temp2_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_5 = *(eax_7 + 0xc) + 0x10
            sub_4f4430(eax_7, sub_4f4380(esi_5), esi_5)
    
    sub_4c42b0(&var_c, "GameSettingsAll")
    char* eax_10 = var_c
    
    if (eax_10 != 0 && *eax_10 != 0)
        void* eax_12 = sub_4c4060(&var_c)
        int32_t temp3_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_8 = *(eax_12 + 0xc) + 0x10
            sub_4f4430(eax_12, sub_4f4380(esi_8), esi_8)
    
    int32_t* result = sub_4c4590(arg7)
    int32_t esi_9 = *(arg6 + 8)
    int32_t esi_10 = neg.d(esi_9)
    int32_t i = neg.d(sbb.d(esi_10, esi_10, esi_9 != 0)) - 1
    
    while (i != 0xffffffff)
        int32_t eax_18 = i * 0xf
        i += 1
        int32_t* ecx_4 = *(arg6 + 4) + (eax_18 << 2)
        
        if (i s>= *(arg6 + 8))
            i = 0xffffffff
        
        char* eax_19 = ecx_4[3]
        result = sub_503ce0(eax_19, arg4, ecx_4, arg5, eax_19, arg8)
    
    return result
}
