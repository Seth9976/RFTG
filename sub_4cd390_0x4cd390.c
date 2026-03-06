// 函数名称: sub_4cd390
// 虚拟地址: 0x4cd390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4cd390(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = *(arg3 + 8)
    void* var_418 = arg3
    
    if (arg4 != eax_2)
        void* ebx_1 = arg4 - eax_2
        
        if (ebx_1 s<= 0)
            sub_4c5870("diff > 0", &data_83f3d3, "DefBin.cpp", 0x9d, "BinFileHandleZipSeek")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        while (true)
            void* var_414_1 = ebx_1
            
            if (ebx_1 s>= 0x400)
                var_414_1 = 0x400
            
            int32_t eax_5
            int32_t edx
            edx:eax_5 = sx.q(var_414_1)
            void var_410
            int32_t eax_6
            int32_t edx_1
            eax_6, edx_1 = zip_fread(*(arg3 + 4), &var_410, eax_5, edx)
            
            if (eax_6 != eax_5 || edx_1 != edx)
                eax_6.b = 0
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_6
            
            ebx_1 -= var_414_1
            
            if (ebx_1 s<= 0)
                break
            
            arg3 = var_418
        
        *(var_418 + 8) = arg4
    
    eax_2.b = 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_2
}
