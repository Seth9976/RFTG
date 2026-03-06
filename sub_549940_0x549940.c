// 函数名称: sub_549940
// 虚拟地址: 0x549940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_549940(void* arg1, void* arg2, char** arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fde8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg3 == 0)
        char** ebx_1 = arg2
        char** edi_1
        
        if (ebx_1 != 0)
            if (ebx_1[1] != 4)
                sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                    "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            edi_1 = ebx_1
        else
            edi_1 = sub_50a390(&ebx_1[1])
        
        arg3 = edi_1
        
        if (*edi_1 == 0)
            sub_5094d0(edi_1, 0, 1)
        
        char* eax_4 = *edi_1
        edi_1[7] = &edi_1[7][1]
        void* eax_5 = *eax_4
        int32_t var_8_1 = 0
        void* esi_1 = *(eax_5 + 4)
        
        if (esi_1 != 0)
            int32_t eax_7 = sub_5493f0(0x8b31, *(esi_1 + 0x1c), ebx_1)
            
            if (eax_7 != 0)
                void* esi_2 = *(eax_5 + 0x18)
                int32_t eax_11 = sub_5493f0(0x8b30, *(esi_2 + 0x1c), ebx_1)
                
                if (eax_11 != 0)
                    int32_t eax_13 = sub_549320(eax_7, eax_11)
                    
                    if (eax_13 != 0)
                        int32_t* eax_14 = sub_54b770(arg1 + 0x4240)
                        *eax_14 = eax_13
                        eax_14[1] = 3
                        sub_549030(eax_14, eax_14, eax_5 + 0x14, eax_13)
                        sub_549240(eax_14)
                        int32_t result = eax_14[0x52]
                        edi_1[7] -= 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
                else
                    sub_5493f0(0x8b30, *(esi_2 + 0x24), ebx_1)
            else
                sub_5493f0(0x8b31, *(esi_1 + 0x24), ebx_1)
        
        edi_1[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
