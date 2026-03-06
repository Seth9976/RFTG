// 函数名称: sub_531970
// 虚拟地址: 0x531970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_531970()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e5e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7fcc
    
    if (eax_3 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi = *(eax_3 + 0x10)
    int32_t ecx = edi[1]
    int32_t eax_5 = 0
    int32_t* var_20 = edi
    int32_t edx_2
    
    if (ecx == 0)
    label_5319f2:
        edx_2 = 0
    else
        void* edx_1 = *edi
        
        while ((*(edx_1 + 0x10) & 0xffff0000) == 0)
            eax_5 += 1
            edx_1 += 0x14
            
            if (eax_5 u>= ecx)
                goto label_5319f2
        
        edx_2 = *(edx_1 + 0x10)
    
    int16_t eax_6 = edx_2.w
    
    if (edx_2 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    int32_t* eax_10
    
    while (true)
        int32_t edx_3 = *edi
        uint32_t eax_7 = zx.d(eax_6)
        int32_t* esi_1 = edx_3 + eax_7 * 0x14
        int32_t ecx_4 = edi[1]
        int32_t eax_8 = eax_7 + 1
        int32_t var_14_1
        
        if (eax_8 u>= ecx_4)
        label_531a45:
            var_14_1 = 0
        else
            void* edx_4 = edx_3 + eax_8 * 0x14
            
            while ((*(edx_4 + 0x10) & 0xffff0000) == 0)
                eax_8 += 1
                edx_4 += 0x14
                
                if (eax_8 u>= ecx_4)
                    goto label_531a45
            
            var_14_1 = *(edx_4 + 0x10)
        
        eax_10 = sub_5212f0(&esi_1[1])
        char** esi_2 = *esi_1
        
        if (esi_2 == 0)
            int32_t* var_18
            sub_509d90(eax_10, "!Null\Null", esi_2 + 7, &var_18)
            char** var_8_1 = esi_2
            char* const edx_5 = var_18
            
            if (edx_5 == 0)
                edx_5 = &data_83f3d3
            
            char** eax_11 = sub_509140(7, edx_5)
            int32_t var_8_2 = 0xffffffff
            eax_10 = var_18
            
            if (eax_10 != 0 && *eax_10 != 0)
                if (eax_10[-4] != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp0_1 = eax_10[-3]
                eax_10[-3] -= 1
                
                if (temp0_1 == 1)
                    void* edx_6 = data_26a44e4
                    int32_t esi_4 = eax_10[-1] + 0x10
                    
                    if (edx_6 == 0)
                        sub_4f4250()
                        edx_6 = data_26a44e4
                    
                    for (int32_t i = 0; i s< 7; i += 1)
                        if (esi_4 s<= 1 << (i.b + 4))
                            eax_10 = sub_4f4430(&eax_10[-4], edx_6 + i * 0x14, esi_4)
                            edi = var_20
                            esi_2 = eax_11
                            goto label_531b31
                    
                    eax_10 = sub_4f4430(&eax_10[-4], edx_6 + 0x8c, esi_4)
                    edi = var_20
            
            esi_2 = eax_11
        else if (esi_2[1] != 7)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
    label_531b31:
        
        if (*esi_2 == 0)
            eax_10 = sub_5094d0(esi_2, 0, 1)
        
        esi_2[7] = &esi_2[7][1]
        esi_2[7] -= 1
        
        if (var_14_1 == 0)
            break
        
        eax_6 = var_14_1.w
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_10
}
