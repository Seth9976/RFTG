// 函数名称: sub_501910
// 虚拟地址: 0x501910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_501910(void* arg1, void* arg2 @ edi)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t ebx
    int32_t var_8 = ebx
    int32_t* esi = *(arg1 + 4)
    int32_t result = 0
    
    if (esi != 0)
        while (true)
            char* const ecx_1 = **esi
            esi = esi[1]
            char* edx_1 = *(arg2 + 4)
            
            if (ecx_1 == 0)
                ecx_1 = &data_83f3d3
            
            int32_t ecx_3
            
            while (true)
                ebx.b = *ecx_1
                char temp0_1 = *edx_1
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        ecx_3 = 0
                        break
                    
                    ebx.b = ecx_1[1]
                    char temp3_1 = edx_1[1]
                    c_1 = ebx.b u< temp3_1
                    
                    if (ebx.b == temp3_1)
                        ecx_1 = &ecx_1[2]
                        edx_1 = &edx_1[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        ecx_3 = 0
                        break
                
                bool c_2 = unimplemented  {sbb ecx, ecx}
                ecx_3 = sbb.d(sbb.d(ecx_1, ecx_1, c_1), 0xffffffff, c_2)
                break
            
            if (ecx_3 == 0)
                result += 1
            
            if (esi == 0)
                break
    
    return result
}
