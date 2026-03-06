// 函数名称: sub_4b3aa0
// 虚拟地址: 0x4b3aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b3aa0(void* arg1 @ esi, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    *(arg1 + 0x10) = fconvert.d(x87_r7)
    *(arg1 + 8) = fconvert.d(x87_r7)
    *(arg1 + 0x20) = arg3
    *(arg1 + 0x18) = arg2
    *(arg1 + 0x1c) = 0x32
    *(arg1 + 0x3c) = sub_4cce80((arg2 << 3) + 8)
    *(arg1 + 0x40) = sub_4cce80((arg2 << 3) + 8)
    *(arg1 + 0x34) = sub_4cce80(0x190)
    *(arg1 + 0x44) = sub_4cce80(0x198)
    *(arg1 + 0x38) = sub_4cce80(0x190)
    int32_t ebx_4 = arg3 * 8
    *(arg1 + 0x48) = sub_4cce80(ebx_4)
    int32_t eax_11 = sub_4cce80(ebx_4)
    long double x87_r7_1 = float.t(1)
    int32_t ecx = *(arg1 + 0x3c)
    *(arg1 + 0x4c) = eax_11
    *(ecx + (arg2 << 3)) = fconvert.d(x87_r7_1)
    *(*(arg1 + 0x44) + 0x190) = fconvert.d(x87_r7_1)
    *(arg1 + 0x24) = sub_4cce80((arg2 << 2) + 4)
    int32_t ebx_6 = 0
    *(arg1 + 0x28) = sub_4cce80((arg2 << 2) + 4)
    int32_t var_8 = 0
    
    if (arg2 + 1 s> 0)
        while (true)
            *(*(arg1 + 0x24) + (ebx_6 << 2)) = sub_4cce80(0x190)
            *(*(arg1 + 0x28) + (ebx_6 << 2)) = sub_4cce80(0x190)
            int32_t edi_2 = 0
            
            while (true)
                edi_2 += 8
                *(*(*(arg1 + 0x24) + (ebx_6 << 2)) + edi_2 - 8) = fconvert.d(
                    float.t(sub_5a88ae()) * fconvert.t(0.20000000000000001) / fconvert.t(32767.0)
                    - fconvert.t(0.10000000000000001))
                *(edi_2 + *(*(arg1 + 0x28) + (var_8 << 2)) - 8) = fconvert.d(float.t(0))
                
                if (edi_2 s>= 0x190)
                    break
                
                ebx_6 = var_8
            
            int32_t eax_22 = var_8 + 1
            var_8 = eax_22
            
            if (eax_22 s>= arg2 + 1)
                break
            
            ebx_6 = var_8
    
    *(arg1 + 0x2c) = sub_4cce80(0xcc)
    int32_t* i = nullptr
    *(arg1 + 0x30) = sub_4cce80(0xcc)
    int32_t* i_1 = nullptr
    
    do
        int32_t ebx_11 = arg3 * 8
        *(i + *(arg1 + 0x2c)) = sub_4cce80(ebx_11)
        int32_t ebx_12 = 0
        *(i + *(arg1 + 0x30)) = sub_4cce80(ebx_11)
        
        if (arg3 s> 0)
            do
                double* edi_4 = *(i + *(arg1 + 0x2c)) + (ebx_12 << 3)
                ebx_12 += 1
                *edi_4 = fconvert.d(
                    float.t(sub_5a88ae()) * fconvert.t(0.20000000000000001) / fconvert.t(32767.0)
                    - fconvert.t(0.10000000000000001))
                *(*(i_1 + *(arg1 + 0x30)) + (ebx_12 << 3) - 8) = fconvert.d(float.t(0))
                i = i_1
            while (ebx_12 s< arg3)
        
        i = &i[1]
        i_1 = i
    while (i s< 0xcc)
    
    sub_5abfc0(*(arg1 + 0x34), 0, 0x190)
    sub_5abfc0(*(arg1 + 0x38), 0, 0x190)
    sub_5abfc0(*(arg1 + 0x40), 0, (arg2 << 3) + 8)
    int32_t eax_35 = __execvp(0x1e0, 0x10)
    
    if (eax_35 == 0)
        sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *(arg1 + 0x58) = eax_35
    int32_t eax_37 = __execvp(0x1e0, 0x10)
    
    if (eax_37 == 0)
        sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *(arg1 + 0x5c) = eax_37
    *(arg1 + 0x60) = 0
    *(arg1 + 0x64) = 0
    *(arg1 + 0x68) = sub_4cce80(arg2 * 4)
    int32_t result = 0
    
    if (arg2 s> 0)
        do
            *(*(arg1 + 0x68) + (result << 2)) = 0
            result += 1
        while (result s< arg2)
    
    return result
}
