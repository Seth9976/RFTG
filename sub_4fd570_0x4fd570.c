// 函数名称: sub_4fd570
// 虚拟地址: 0x4fd570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4fd570()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ceb3
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result = data_26a44ec
    
    if (result != 0)
        void* result_1 = result
        int32_t var_8_1 = 0
        sub_5a71d9(result + 0x90, 0xc, 0xc, sub_4fdaa0)
        int32_t var_8_2 = 0xffffffff
        sub_5a71d9(result, 0xc, 0xc, sub_4fdaa0)
        void* edx_1 = data_26a44e4
        int32_t* esi_2 = data_26a44ec
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax_4 = 0
        int32_t* edi_2
        
        while (true)
            if (1 << (eax_4.b + 4) s>= 0x128)
                edi_2 = edx_1 + eax_4 * 0x14
                break
            
            eax_4 += 1
            
            if (eax_4 s>= 7)
                edi_2 = edx_1 + 0x8c
                break
        
        edi_2[3] -= 1
        result = sub_4f4210(edi_2, esi_2)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_2 = *edi_2
        *edi_2 = esi_2
        data_26a44ec = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
