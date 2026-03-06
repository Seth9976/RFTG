// 函数名称: sub_402a00
// 虚拟地址: 0x402a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_402a00(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t eax = data_8c8708
    int32_t eax = data_8c8708
    
    if (eax != 0)
        if (eax != 1)
            sub_4c5870("Halt", &data_83f3d3, "..\code\CardNet.cpp", 0x48b, "ClientConnectionAlloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* ecx
        int32_t* ecx_2 = sub_4b7710(ecx)
        int32_t* eax_3 = data_8c8710
        
        if (eax_3[1].b == 0)
            int128_t* eax_9 = sub_402f20(data_27e7a44 + 0x1c)
            *eax_9 = arg1
            return eax_9
        
        int32_t edx_1 = *eax_3
        int32_t var_14
        int32_t* var_20_1 = &var_14
        int32_t var_24_1 = 0xf4245
        int32_t var_c_1 = edx_1
        var_14 = 3
        sub_4c8dd0(arg1, edx_1, ecx_2)
        sub_4c8d10()
        
        if (arg1 != 0)
            void* ecx_3 = data_27e7bb8
            uint32_t eax_5 = zx.d(arg1.w)
            
            if (eax_5 u< *(ecx_3 + 4))
                int32_t* eax_7 = eax_5 * 0x4c + *ecx_3
                
                if (eax_7[0x12] == arg1)
                    sub_4c6a10(eax_7)
    else
        void* eax_1 = data_27e7a44
        
        if (*(eax_1 + 0x2c) s< *(eax_1 + 0x20))
            int128_t* eax_2 = sub_402f20(eax_1 + 0x1c)
            *eax_2 = arg1
            return eax_2
    
    return 0
}
