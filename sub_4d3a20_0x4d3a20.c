// 函数名称: sub_4d3a20
// 虚拟地址: 0x4d3a20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_4d3a20(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6900f8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** ebx = arg1
    
    if (ebx == 0)
        ebx = sub_50a390(2)
    else if (ebx[1] != 2)
        sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
            "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char** var_18 = ebx
    
    if (*ebx == 0)
        sub_5094d0(ebx, 0, 1)
    
    char* eax_4 = *ebx
    ebx[7] = &ebx[7][1]
    int32_t* i = *eax_4
    int32_t var_8_1 = 0
    int32_t* edi = *i
    
    if (edi != 0)
        int32_t* i_1 = nullptr
        
        if (*edi s> 0)
            int32_t var_14_1 = 0
            int32_t* edi_1 = edi
            
            do
                void* esi_2 = edi_1[1] + var_14_1
                
                if (*(esi_2 + 0xc) != 0)
                    if ((*(*data_3078804 + 0x28))(*(esi_2 + 0x24)) == 0)
                        *(esi_2 + 0x24) =
                            (*(*data_3078804 + 0x24))(*(esi_2 + 0x14), *(esi_2 + 0x10), *(esi_2 + 8), 0)
                    
                    if (*(esi_2 + 0x1c) s> 0 && (*(*data_3078804 + 0x34))(*(esi_2 + 0x28)) == 0)
                        int32_t eax_15 = *(esi_2 + 0x1c)
                        ebx = var_18
                        edi_1 = edi
                        *(esi_2 + 0x28) = (*(*data_3078804 + 0x30))(*(esi_2 + 0x20), eax_15, 
                            zx.d(eax_15 != *(esi_2 + 0x18) * 2), 0, *(esi_2 + 0x24))
                
                var_14_1 += 0x140
                i = i_1 + 1
                i_1 = i
            while (i s< *edi_1)
    
    ebx[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return i
}
