// 函数名称: sub_4cecf0
// 虚拟地址: 0x4cecf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4cecf0(int32_t arg1, int32_t* arg2, int128_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68f630
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1
    int32_t eax_2 = __security_cookie ^ &result_1
    int32_t __saved_edi
    int32_t var_6c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_5 = arg2[1]
    GET_FILEEX_INFO_LEVELS fInfoLevelId
    
    if (eax_5 u> 0x22)
        char const* const var_70_10 = "AssetTypeGetInfo"
        fInfoLevelId = 0xb6
        sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
            "AssetTypeRegistry.cpp", fInfoLevelId, var_70_10)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t edx = data_30785d4
    void* ecx_2 = *((eax_5 << 5) + edx + 0x1c)
    
    if (eax_5 u> 0x22)
        char const* const var_70_9 = "AssetTypeGetInfo"
        fInfoLevelId = 0xb6
        sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
            "AssetTypeRegistry.cpp", fInfoLevelId, var_70_9)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char* const eax_8 = arg2[8]
    
    if (eax_8 == 0)
        eax_8 = &data_83f3d3
    
    sub_509f10(eax_8, &result_1, eax_8, &result_1)
    int32_t var_c_1 = 0
    
    if (*arg2 == 0)
        char var_70_1 = 1
        fInfoLevelId = GetFileExInfoStandard
        sub_5094d0(arg2, fInfoLevelId, var_70_1)
    
    int32_t* eax_10 = **arg2
    GET_FILEEX_INFO_LEVELS* var_50
    int32_t var_48
    sub_4ce380(eax_10, ecx_2, &var_48, &var_50, eax_10)
    int32_t var_70_3 = 0xa8
    fInfoLevelId = GetFileExInfoStandard
    sub_5abfc0(arg3, fInfoLevelId.b, var_70_3)
    *arg3 = arg2[1]
    *(arg3 + 4) = *(ecx_2 + 0x18)
    int32_t edx_4 = *((eax_5 << 5) + edx + 0x14)
    GET_FILEEX_INFO_LEVELS* ecx_7 = var_50
    *(arg3 + 0xc) = arg4
    char* result_2 = result_1
    *(arg3 + 8) = edx_4
    arg3[1].d = ecx_7
    *(arg3 + 0x14) = var_48
    
    if (result_2 == 0)
        result_2 = &data_83f3d3
    else
        if (*result_2 != 0)
            if (*(sub_4c4060(&result_1) + 8) s>= 0x80)
                char const* const var_70_4 = "DefBinWriteMakeAssetEntry"
                fInfoLevelId = 0x458
                sub_4c5870("assetName.Length() < MAX_ASSET_NAME_LEN", &data_83f3d3, "DefBin.cpp", 
                    fInfoLevelId, var_70_4)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result_2 = result_1
        
        if (result_2 == 0)
            result_2 = &data_83f3d3
    
    char* edx_6 = arg3 - result_2 + 0x28
    GET_FILEEX_INFO_LEVELS fInfoLevelId_1
    
    do
        fInfoLevelId_1.b = *result_2
        *(edx_6 + result_2) = fInfoLevelId_1.b
        result_2 = &result_2[1]
    while (fInfoLevelId_1.b != 0)
    
    int32_t var_70_5 = arg2[1]
    fInfoLevelId = fInfoLevelId_1
    GET_FILEEX_INFO_LEVELS fInfoLevelId_2 = arg2[8]
    var_50 = &fInfoLevelId
    fInfoLevelId = fInfoLevelId_2
    
    if (fInfoLevelId_2 != GetFileExInfoStandard && *fInfoLevelId_2 != 0)
        void* eax_17 = sub_4c4060(&fInfoLevelId)
        *(eax_17 + 4) += 1
    
    PSTR lpFileName_3
    sub_51f6d0(&lpFileName_3, fInfoLevelId)
    var_c_1.b = 1
    GET_FILEEX_INFO_LEVELS fInfoLevelId_3 = arg2[1]
    GET_FILEEX_INFO_LEVELS fInfoLevelId_4 = arg2[8]
    GET_FILEEX_INFO_LEVELS fInfoLevelId_5 = fInfoLevelId_3
    fInfoLevelId = fInfoLevelId_3
    var_50 = &fInfoLevelId
    fInfoLevelId = fInfoLevelId_4
    
    if (fInfoLevelId_4 != GetFileExInfoStandard && *fInfoLevelId_4 != 0)
        void* eax_19 = sub_4c4060(&fInfoLevelId)
        *(eax_19 + 4) += 1
    
    char* lpFileName_2
    sub_51fbc0(&lpFileName_2)
    PSTR lpFileName = lpFileName_3
    
    if (lpFileName == 0)
        lpFileName = &data_83f3d3
    
    void var_40
    void* lpFileInformation = &var_40
    fInfoLevelId = GetFileExInfoStandard
    int32_t var_2c
    int32_t var_28
    
    if (GetFileAttributesExA(lpFileName, fInfoLevelId, lpFileInformation) != 0)
        *(arg3 + 0x18) = var_2c
        *(arg3 + 0x1c) = var_28
    else
        *(arg3 + 0x18) = 0
        *(arg3 + 0x1c) = 0
    
    char* const lpFileName_1 = lpFileName_2
    
    if (lpFileName_1 == 0)
        lpFileName_1 = &data_83f3d3
    
    void* lpFileInformation_1 = &var_40
    fInfoLevelId = GetFileExInfoStandard
    
    if (GetFileAttributesExA(lpFileName_1, fInfoLevelId, lpFileInformation_1) != 0)
        arg3[2].d = var_2c
        *(arg3 + 0x24) = var_28
    else
        arg3[2].d = 0
        *(arg3 + 0x24) = 0
    
    char* lpFileName_4 = lpFileName_2
    
    if (lpFileName_4 != 0 && *lpFileName_4 != 0)
        void* eax_25 = sub_4c4060(&lpFileName_2)
        int32_t temp0_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_25 + 0xc) + 0x10
            sub_4f4430(eax_25, sub_4f4380(esi_2), esi_2)
    
    var_c_1.b = 0
    PSTR lpFileName_5 = lpFileName_3
    
    if (lpFileName_5 != 0 && *lpFileName_5 != 0)
        void* eax_29 = sub_4c4060(&lpFileName_3)
        int32_t temp1_1 = *(eax_29 + 4)
        *(eax_29 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_4 = *(eax_29 + 0xc) + 0x10
            sub_4f4430(eax_29, sub_4f4380(esi_4), esi_4)
    
    int32_t var_c_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_6 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_6), esi_6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &result_1)
    return result
}
