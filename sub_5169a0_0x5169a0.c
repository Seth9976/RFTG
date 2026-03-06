// 函数名称: sub_5169a0
// 虚拟地址: 0x5169a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_5169a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = arg1[5]
    void* result
    
    if (arg1[3] != 0)
        void* edi_3 = edi * 0x2c
        __alloca_probe_16(edi_3)
        int32_t __saved_edi
        sub_5abfc0(&__saved_edi, 0, edi_3)
        sub_515980(arg1)
        int32_t eax_4
        int32_t edx_2
        int80_t st0_1
        st0_1, eax_4, edx_2 = sub_5161c0(&__saved_edi)
        sub_516350(eax_4, edx_2, arg1, &__saved_edi)
        void* eax_5
        int32_t edx_3
        eax_5, edx_3 = sub_518040(arg1, &__saved_edi)
        
        if (eax_5.b != 0)
            sub_516350(eax_5, edx_3, arg1, &__saved_edi)
        
        result = sub_5167f0(arg1)
    else
        result = nullptr
        
        if (edi s> 0)
            int32_t edx_1 = 0
            BOOL eax_2
            
            while (true)
                if (result s< 0 || result s>= arg1[0x20])
                    sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                        "c:\ax2010\engine\xArray.h", 0xb5, "XArray<struct Mat4>::operator []")
                    eax_2 = IsDebuggerPresent()
                    break
                
                int32_t edi_2 = arg1[0x1f] + edx_1
                result += 1
                edx_1 += 0x40
                __builtin_memcpy(edi_2, 0x83faf8, 0x40)
                
                if (result s< edi)
                    continue
                
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return result
            
            if (eax_2 == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
