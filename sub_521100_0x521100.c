// 函数名称: sub_521100
// 虚拟地址: 0x521100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_521100(float* arg1)
{
    // 第一条实际指令: float* edi = arg1
    float* edi = arg1
    
    if (edi[5] != 0)
        while (true)
            float* ebx_1 = edi[5]
            char eax_1 = sub_5691e0(ebx_1, edi)
            float* result
            
            if (eax_1 != 0)
                result = sub_5691e0(edi[6], edi)
            
            if (eax_1 != 0 && result.b != 0)
                return result
            
            float* eax_2 = sub_569250(ebx_1, edi[6])
            int32_t edx_1 = eax_2[1]
            int32_t esi_3 = eax_2[2]
            int32_t edi_2 = eax_2[3]
            *arg1 = *eax_2
            arg1[1] = edx_1
            arg1[2] = esi_3
            arg1[3] = edi_2
            result = arg1[4]
            
            if (result == 0)
                return result
            
            arg1 = result
            
            if (result[5] == 0)
                break
            
            edi = arg1
    
    sub_4c5870("node->nodeType != LEAF_NODE", &data_83f3d3, "SphereTree.cpp", 0xf3, "sInflate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
