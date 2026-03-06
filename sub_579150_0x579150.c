// 函数名称: sub_579150
// 虚拟地址: 0x579150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_579150(int32_t* arg1, char arg2)
{
    // 第一条实际指令: void var_5c
    void var_5c
    int32_t eax_1 = __security_cookie ^ &var_5c
    int32_t eax_2 = data_27bc44c
    int32_t* result
    
    if (eax_2 != 0)
        if (eax_2 != 2)
            sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x4b4, "DragSelectionRect")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_13 = sub_4f4890(data_273ac20)
        *arg1 = *(eax_13 + 8)
        arg1[1] = *(eax_13 + 0xc)
        int32_t eax_14 = *(eax_13 + 0x14)
        arg1[2] = *(eax_13 + 0x10)
        arg1[3] = eax_14
        result = arg1
    else
        void* eax_3 = sub_575c20(data_273ac2c)
        void* var_58_1
        float var_20
        
        if (arg2 == 0)
            var_58_1 = eax_3 + 0xc
            sub_4fc810(&var_20, eax_3 + 0x74, eax_3 + 0xc)
            *arg1 = var_20
            int32_t var_1c
            arg1[1] = var_1c
            int32_t var_18
            arg1[2] = var_18
            int32_t var_14
            arg1[3] = var_14
            result = arg1
        else
            result = arg1
            int32_t edx = *(eax_3 + 0x10)
            *result = *(eax_3 + 0xc)
            int32_t ecx_1 = *(eax_3 + 0x14)
            result[1] = edx
            int32_t edx_1 = *(eax_3 + 0x18)
            result[2] = ecx_1
            var_58_1 = eax_3 + 0xc
            result[3] = edx_1
        
        int32_t i = 1
        int32_t i_1 = 1
        
        if (data_273bc2c s> 1)
            do
                int32_t ebx_1 = (&data_273ac2c)[i]
                int32_t* eax_7 = sub_4f4890(data_273ac20)
                int32_t ecx_4 = 0
                int32_t* edx_6 = nullptr
                void* ecx_6
                
                while (true)
                    if (ecx_4 s>= eax_7[1])
                        sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_2 = *eax_7
                    
                    if (*(edx_6 + esi_2) == ebx_1)
                        ecx_6 = ecx_4 * 0x118 + esi_2
                        break
                    
                    ecx_4 += 1
                    edx_6 = &edx_6[0x46]
                
                float var_40[0x4]
                
                if (arg2 == 0)
                    float var_30
                    sub_4fc810(&var_30, ecx_6 + 0x74, ecx_6 + 0xc)
                    var_20 = var_30
                    int32_t var_2c
                    int32_t var_1c_1 = var_2c
                    int32_t var_28
                    int32_t var_18_1 = var_28
                    int32_t var_24
                    int32_t var_14_1 = var_24
                    float var_50[0x4]
                    float* eax_9 = sub_4684b0(result, &var_20, &var_50)
                    int32_t edx_12 = eax_9[1]
                    *result = *eax_9
                    int32_t ecx_13 = eax_9[2]
                    result[1] = edx_12
                    int32_t edx_13 = eax_9[3]
                    result[2] = ecx_13
                    result[3] = edx_13
                else
                    sub_4684b0(result, var_58_1, &var_40)
                i = i_1 + 1
                i_1 = i
            while (i s< data_273bc2c)
            
            sub_5a6aba(eax_1 ^ &var_5c)
            return result
    
    sub_5a6aba(eax_1 ^ &var_5c)
    return result
}
