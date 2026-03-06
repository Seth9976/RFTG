// 函数名称: sub_5209f0
// 虚拟地址: 0x5209f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5209f0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fc18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* arg_4
    int32_t* esi = arg_4
    int32_t eax_3 = esi[2]
    
    if (eax_3 == 0 || eax_3 == 1)
        char* eax_4 = esi[3]
        
        if (eax_4 != 0 && *eax_4 != 0)
            sub_4c5870("assetPtr->xbinFilePath.IsEmpty()", &data_83f3d3, "DefLoad.cpp", 0x248, 
                "DefinitionLoadPackAsset")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* const ecx_1 = esi[8]
        
        if (ecx_1 == 0)
            ecx_1 = &data_83f3d3
        
        int32_t var_8_1 = 0
        char* var_14
        int32_t edx
        sub_4c4510(sub_51f490(&var_14, edx, ecx_1, &var_14))
        int32_t var_8_2 = 0xffffffff
        char* eax_8 = var_14
        
        if (eax_8 != 0 && *eax_8 != 0)
            void* eax_10 = sub_4c4060(&var_14)
            int32_t temp0_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = *(eax_10 + 0xc) + 0x10
                sub_4f4430(eax_10, sub_4f4380(esi_2), esi_2)
                esi = arg_4
    
    if (sub_4cfca0(esi, &arg_4) == 0)
        esi[2] = 0
        sub_4c4590(&data_83f3d3)
        int32_t* eax_14
        eax_14.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_14
    
    int32_t eax_15 = esi[1]
    esi[2] = 2
    
    if (eax_15 u> 0x22)
        sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
            "AssetTypeRegistry.cpp", 0xb6, "AssetTypeGetInfo")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t* edi_2 = arg_4
    int32_t eax_18 = *((eax_15 << 5) + data_30785d4 + 4)
    
    if (eax_18 != 0)
        char* const ecx_4 = esi[8]
        
        if (ecx_4 == 0)
            ecx_4 = &data_83f3d3
        
        eax_18(ecx_4, *edi_2, eax_2)
    
    if (*esi == 0)
        *esi = edi_2
        eax_18.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_18
    
    sub_4c5870("assetPtr->pAssetData == NULL", &data_83f3d3, "DefLoad.cpp", 0x25d, 
        "DefinitionLoadPackAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
