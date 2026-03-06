// 函数名称: sub_4b25d0
// 虚拟地址: 0x4b25d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4b25d0(int32_t arg1, int32_t arg2, char* arg3 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* eax_4 = *((arg2 << 8) + 0x8c6030)
    int32_t ebx
    int32_t var_410 = ebx
    int32_t ecx = 0
    
    if (eax_4 != 0)
        void* esi_1 = (arg2 << 8) + 0x8c6030
        
        while (true)
            char* edx_2 = arg3
            int32_t eax_6
            
            while (true)
                ebx.b = *eax_4
                char temp0_1 = *edx_2
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        eax_6 = 0
                        break
                    
                    ebx.b = eax_4[1]
                    char temp3_1 = edx_2[1]
                    c_1 = ebx.b u< temp3_1
                    
                    if (ebx.b == temp3_1)
                        eax_4 = &eax_4[2]
                        edx_2 = &edx_2[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        eax_6 = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax_6 = sbb.d(sbb.d(eax_4, eax_4, c_1), 0xffffffff, c_2)
                break
            
            if (eax_6 == 0)
                int32_t result = __allshl(1, 0, ecx.b)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return result
            
            eax_4 = *(esi_1 + 4)
            esi_1 += 4
            ecx += 1
            
            if (eax_4 == 0)
                break
    
    char* var_418 = arg3
    void var_40c
    sub_5a733b(&var_40c, "No power named '%s'\n")
    void* var_424 = &var_40c
    sub_4c5680("error %s")
    sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\init.cpp", 0x14c, "lookup_power")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
