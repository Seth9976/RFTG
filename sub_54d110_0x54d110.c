// 函数名称: sub_54d110
// 虚拟地址: 0x54d110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_54d110(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691ee8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = data_31656c0
    char** result_1 = sub_54ceb0(arg1)
    char** result = result_1
    
    if (result_1 == 0)
        result_1 = sub_50a390(result_1 + 3)
    else if (result_1[1] != 3)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** result_2 = result_1
    
    if (*result_1 == 0)
        sub_5094d0(result_1, 0, 1)
    
    char* eax_4 = *result_1
    result_1[7] = &result_1[7][1]
    int32_t* edi = *eax_4
    int32_t var_8_1 = 0
    int32_t* esi = *edi
    
    if (esi == 0)
        int32_t* eax_5 = __execvp(0x40, 0x10)
        
        if (eax_5 == 0)
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        esi = eax_5
        sub_4fe7d0(eax_5, data_30d746c)
        *edi = eax_5
    
    if (eax_3[1] != 3)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
            "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_10 = sub_466320(eax_3)
    *esi = **eax_10
    int32_t ecx_2 = *(*eax_10 + 4)
    esi[3] = 1
    esi[0xd] = 1
    esi[1] = ecx_2
    esi[5] = *(*eax_10 + 0x14)
    int32_t* eax_13 = sub_4cce80(8)
    *eax_13 = 0
    eax_13[1] = 0
    int32_t ecx_3 = *esi
    esi[0xf] = eax_13
    int32_t eax_14 = esi[1]
    int32_t var_30 = ecx_3
    int32_t eax_15 = esi[5]
    int32_t var_24 = eax_15
    int32_t eax_17 = sub_553f70(eax_15) * *esi
    int32_t eax_19 = sub_4cce80(eax_17 * eax_14)
    int32_t* ecx_4 = data_3078804
    int32_t var_34 = eax_19
    (*(*ecx_4 + 0x80))(eax_3, &var_34)
    int32_t* eax_21 = esi[0xf]
    *eax_21 = eax_17 * eax_14
    eax_21[1] = var_34
    esi[4] = 8
    int32_t ecx_7 = *(*eax_10 + 0x14)
    esi[6] = 0
    esi[7] = 0
    esi[5] = ecx_7
    esi[8] = 1
    result_1[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
