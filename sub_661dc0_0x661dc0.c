// 函数名称: sub_661dc0
// 虚拟地址: 0x661dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_661dc0(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    
    if (edi == 0 || arg2 == 0)
        return 
    
    sub_661190(edi, arg2)
    
    if (arg2[1] u> 0x3fffffff)
        sub_664320(edi, "Image is too high to process with png_read_png()")
        noreturn
    
    if ((arg3 & 0x8000) != 0)
        sub_66ab00(edi)
    
    if ((arg3.b & 1) != 0)
        sub_66ab20(edi)
    
    if ((arg3.b & 2) != 0)
        sub_66ab40(edi)
    
    if ((arg3.b & 8) != 0)
        sub_66e970(edi)
    
    if ((arg3.b & 0x10) != 0)
        int32_t eax_1
        
        if (edi[0x4f].b u>= 8 && *(edi + 0x13b) != 3)
            eax_1 = sub_660e80(edi, arg2, 0x10)
        
        if (edi[0x4f].b u< 8 || *(edi + 0x13b) == 3 || eax_1 != 0)
            sub_66ab60(edi)
    
    if ((arg3.b & 0x20) != 0)
        sub_66ea90(edi)
    
    if ((arg3.b & 0x40) != 0 && sub_660e80(edi, arg2, 2) != 0)
        sub_660f40(edi, arg2, &arg1)
        sub_66e990(edi, arg1)
    
    if (arg3.b s< 0)
        sub_66e920(edi)
    
    if ((arg3 & 0x100) != 0)
        sub_66ea50(edi)
    
    if ((arg3 & 0x200) != 0)
        sub_66e930(edi)
    
    if ((arg3 & 0x400) != 0)
        sub_66ea70(edi)
    
    if ((arg3 & 0x2000) != 0)
        sub_66abb0(edi)
    
    if ((arg3 & 0x4000) != 0)
        sub_66ab80(edi)
    
    sub_66e9c0(edi)
    sub_667770(edi)
    sub_66b850(edi, arg2)
    sub_6622f0(edi, arg2, 0x40, 0)
    
    if (arg2[0x3a] == 0)
        int32_t eax_3
        int32_t ecx_2
        eax_3, ecx_2 = sub_6664e0(edi, arg2[1] * 4)
        arg2[0x3a] = eax_3
        int32_t i = 0
        
        if (arg2[1] u> 0)
            do
                *(arg2[0x3a] + (i << 2)) = 0
                i += 1
            while (i u< arg2[1])
        
        arg2[0x2e] |= 0x40
        int32_t i_1 = 0
        
        if (arg2[1] s> 0)
            do
                *(arg2[0x3a] + (i_1 << 2)) = sub_6664e0(edi, sub_660ea0(edi, arg2))
                i_1 += 1
            while (i_1 s< arg2[1])
    
    sub_661900(edi, arg2[0x3a])
    arg2[2] |= 0x8000
    sub_6619a0(edi, arg2)
}
