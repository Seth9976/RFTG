// 函数名称: sub_54f6b0
// 虚拟地址: 0x54f6b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_54f6b0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693b96
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_14
    sub_4c42b0(&var_14, "sys/pbr/brdf_lut")
    int32_t var_8_1 = 0
    char** eax_3 = sub_54d320(&var_14)
    int32_t var_8_2 = 0xffffffff
    char* eax_4 = var_14
    
    if (eax_4 != 0 && *eax_4 != 0)
        void* eax_6 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_6 + 0xc) + 0x10
            sub_4f4430(eax_6, sub_4f4380(esi_2), esi_2)
    
    if (eax_3 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if ((data_3165a68 & 1) == 0)
        data_3165a68.d |= 1
        int32_t var_8_3 = 1
        int32_t* eax_10
        int32_t edx_1
        eax_10, edx_1 = sub_4ff5f0(data_30d7470)
        char** eax_11 = sub_509750(eax_10, edx_1, 3, eax_10)
        char** var_1c_1 = eax_11
        
        if (eax_11 == 0)
            eax_11 = sub_50a390(3)
        else if (eax_11[1] != 3)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        bool cond:0_1 = *eax_11 != 0
        var_14 = eax_11
        
        if (not(cond:0_1))
            sub_5094d0(eax_11, 0, 1)
        
        char* eax_12 = *eax_11
        eax_11[7] = &eax_11[7][1]
        int32_t** ebx_1 = *eax_12
        var_8_3.b = 2
        int32_t* eax_13 = __execvp(0x40, 0x10)
        
        if (eax_13 == 0)
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4fe7d0(eax_13, data_30d746c)
        *eax_13 = 0x200
        eax_13[1] = 0x200
        eax_13[4] = 8
        eax_13[5] = 0x70
        eax_13[6] = 3
        eax_13[3] = 1
        eax_13[0xd] = 0
        eax_13[0xf] = 0
        
        if (*ebx_1 != 0)
            sub_4c5870("pDefTexture->pTextureImportData == NULL", &data_83f3d3, "Texture.cpp", 0x3cf, 
                "TextureCreateForRendering")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *ebx_1 = eax_13
        eax_11[7] = &eax_11[7][0xffffffff]
        data_31656c0 = var_1c_1
        int32_t var_8_4 = 0xffffffff
    
    sub_4e1c90()
    long double x87_r7 = fconvert.t(512f)
    float var_18 = fconvert.s(x87_r7)
    var_14 = fconvert.s(x87_r7)
    sub_54f4a0(&var_18)
    sub_4e1f30()
    void* eax_18 = data_27e7fe4
    *(eax_18 + 0x244) += 1
    void* eax_19 = eax_18 + ((*(eax_18 + 0x244) * 5 + 0x41) << 2)
    int32_t ecx_8 = data_31656c0
    *eax_19 = 2
    *(eax_19 + 8) = ecx_8
    *(eax_19 + 0xc) = 0
    *(eax_19 + 0x10) = 0
    sub_4e57f0(ecx_8, 0, 0)
    (*(*data_3078804 + 0x8c))(data_27e8020)
    sub_4ddd00()
    sub_4e1260()
    sub_4e1a70(2)
    sub_4e1fa0()
    sub_4e5ea0()
    sub_4c42b0(&var_14, "sys/pbr/brdf_lut")
    int32_t var_8_5 = 3
    char** eax_21 = sub_54d110(&var_14)
    int32_t var_8_6 = 0xffffffff
    char* eax_22 = var_14
    
    if (eax_22 != 0 && *eax_22 != 0)
        void* eax_24 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_24 + 4)
        *(eax_24 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_6 = *(eax_24 + 0xc) + 0x10
            sub_4f4430(eax_24, sub_4f4380(esi_6), esi_6)
    
    sub_509bf0(eax_21)
    sub_508cd0(eax_21)
    fsbase->NtTib.ExceptionList = ExceptionList
    return data_31656c0
}
