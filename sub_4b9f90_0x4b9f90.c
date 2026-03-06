// 函数名称: sub_4b9f90
// 虚拟地址: 0x4b9f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b9f90(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f2dd
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    char result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x1d0) != 0)
        sub_4c8d10()
        *(arg1 + 0x1d0)
        sub_4d0ae0()
        result = sub_4d0b90(*(arg1 + 0x1d0))
        void* esi_2 = *(arg1 + 0x1d0)
        
        if (esi_2 != 0)
            void* var_14_1 = esi_2
            int32_t var_8_1 = 0
            sub_4ba130(esi_2 + 0x518)
            int32_t var_8_2 = 0xffffffff
            sub_5041e0(esi_2 + 0x50c)
            void* edx_1 = data_26a44e4
            int32_t* esi_4 = *(arg1 + 0x1d0)
            
            if (edx_1 == 0)
                sub_4f4250()
                edx_1 = data_26a44e4
            
            int32_t eax_4 = 0
            int32_t* ebx_3
            
            while (true)
                if (1 << (eax_4.b + 4) s>= 0x530)
                    ebx_3 = edx_1 + eax_4 * 0x14
                    break
                
                eax_4 += 1
                
                if (eax_4 s>= 7)
                    ebx_3 = edx_1 + 0x8c
                    break
            
            result = -1
            ebx_3[3] -= 1
            
            if (ebx_3[4] != 0xffffffff)
                result = sub_4f4210(ebx_3, esi_4)
                
                if (result == 0)
                    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                        "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                *esi_4 = *ebx_3
                *ebx_3 = esi_4
            else if (esi_4 != 0)
                result = _aligned_free_base(esi_4)
            
            *(arg1 + 0x1d0) = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
