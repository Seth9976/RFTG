// 函数名称: sub_4f6f00
// 虚拟地址: 0x4f6f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_4f6f00(int32_t* arg1)
{
    // 第一条实际指令: void var_7c
    void var_7c
    int32_t eax_1 = __security_cookie ^ &var_7c
    int128_t* ebx = sub_4fc2f0(&data_be1cb8)
    *(ebx + 4) = arg1
    int32_t* ecx = sub_4f4890(arg1)
    int32_t eax_4 = ecx[1]
    int32_t* var_54 = ecx
    
    if (eax_4 s>= 0x100)
        sub_4c5870("layout.numElements < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x54c, 
            "UIStateLoad")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (eax_4 s> 0)
        int32_t var_74_1 = 0
        
        do
            void* ebx_2 = *ecx + var_74_1
            int32_t eax_6 = *(ebx_2 + 4)
            
            if (eax_6 == 6)
                int32_t* eax_19 = sub_4f6e90(i, ebx, *(ebx_2 + 8))
                
                if (eax_19[2] s<= *eax_19)
                    ebx_2.b = *(ebx_2 + 0x30)
                else
                    ebx_2.b = eax_19[3].b
                
                long double x87_r7_4
                
                if (ebx_2.b == 0)
                    x87_r7_4 = float.t(1)
                else
                    x87_r7_4 = float.t(0)
                
                eax_19[4] = fconvert.s(x87_r7_4)
            else if (eax_6 == 7)
                int128_t* eax_15 = sub_4f6e90(i, ebx, *(ebx_2 + 8))
                int32_t* eax_17 = sub_4e7ab0(*(ebx_2 + 0x34))
                *(ebx_2 + 0x38)
                sub_4e8720(eax_17, *(ebx_2 + 0x3c), fconvert.s(fconvert.t(*(ebx_2 + 0x40))))
                *(eax_15 + 0x9c) = eax_17[0x24]
            else if (eax_6 == 8)
                int128_t* eax_11 = sub_4f6e90(i, ebx, *(ebx_2 + 8))
                int32_t* ebx_3 = *(ebx_2 + 0x44)
                
                if (ebx_3 != 0)
                    long double x87_r7_1 = float.t(0)
                    float var_68_1 = fconvert.s(x87_r7_1)
                    float var_64_1 = fconvert.s(x87_r7_1)
                    int32_t var_4c = 0
                    float var_60_1 = fconvert.s(x87_r7_1)
                    int32_t var_48_1 = 0
                    float var_50 = fconvert.s(float.t(1))
                    int32_t var_40_1 = 0x3f800000
                    float var_3c_1 = var_68_1
                    int32_t var_44_1 = 0
                    float var_34_1 = var_60_1
                    float var_38_1 = var_64_1
                    void var_2c
                    __builtin_memcpy(&var_2c, &var_50, 0x20)
                    int128_t* eax_13 = sub_4eb180(ebx_3, &var_2c)
                    eax_13[2].d = 1
                    *(eax_13 + 0x74) = 0
                    eax_11[0xa].d = *(eax_13 + 0x78)
            
            ecx = var_54
            var_74_1 += 0x118
            i = i_1 + 1
            i_1 = i
        while (i s< ecx[1])
    
    *(ebx + 0x434)
    sub_5a6aba(eax_1 ^ &var_7c)
}
