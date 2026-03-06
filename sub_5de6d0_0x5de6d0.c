// 函数名称: sub_5de6d0
// 虚拟地址: 0x5de6d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5de6d0(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: HDC hdc = *(*(arg1 + 0x74) + 8)
    HDC hdc = *(*(arg1 + 0x74) + 8)
    float var_8 = fconvert.s(float.t(0))
    void ppfd
    sub_5de1b0(&ppfd, arg3)
    int32_t edx = *(arg3 + 0x100)
    int32_t var_114 = *(arg3 + 0x108)
    int32_t ecx_2 = *(arg3 + 0x10c)
    int32_t var_11c = *(arg3 + 0x104)
    int32_t var_130 = 0x2001
    int32_t var_12c = 1
    int32_t var_128 = 0x2015
    int32_t var_124 = edx
    int32_t var_120 = 0x2017
    int32_t var_118 = 0x2019
    int32_t var_110
    int32_t* eax_1 = &var_110
    
    if (ecx_2 != 0)
        var_110 = 0x201b
        int32_t var_10c_1 = ecx_2
        void var_108
        eax_1 = &var_108
    
    int32_t edx_1 = *(arg3 + 0x11c)
    int32_t ecx_3 = *(arg3 + 0x110)
    *eax_1 = 0x2011
    eax_1[1] = edx_1
    eax_1[2] = 0x2022
    eax_1[3] = ecx_3
    int32_t ecx_4 = *(arg3 + 0x118)
    void* eax_2 = &eax_1[4]
    
    if (ecx_4 != 0)
        *eax_2 = 0x2023
        *(eax_2 + 4) = ecx_4
        eax_2 += 8
    
    int32_t ecx_5 = *(arg3 + 0x120)
    
    if (ecx_5 != 0)
        *eax_2 = 0x201e
        *(eax_2 + 4) = ecx_5
        eax_2 += 8
    
    int32_t ecx_6 = *(arg3 + 0x124)
    
    if (ecx_6 != 0)
        *eax_2 = 0x201f
        *(eax_2 + 4) = ecx_6
        eax_2 += 8
    
    int32_t ecx_7 = *(arg3 + 0x128)
    
    if (ecx_7 != 0)
        *eax_2 = 0x2020
        *(eax_2 + 4) = ecx_7
        eax_2 += 8
    
    int32_t ecx_8 = *(arg3 + 0x12c)
    
    if (ecx_8 != 0)
        *eax_2 = 0x2021
        *(eax_2 + 4) = ecx_8
        eax_2 += 8
    
    if (*(arg3 + 0x130) != 0)
        *eax_2 = 0x2012
        *(eax_2 + 4) = 1
        eax_2 += 8
    
    int32_t ecx_9 = *(arg3 + 0x134)
    
    if (ecx_9 != 0)
        *eax_2 = 0x2041
        *(eax_2 + 4) = ecx_9
        eax_2 += 8
    
    int32_t ecx_10 = *(arg3 + 0x138)
    
    if (ecx_10 != 0)
        *eax_2 = 0x2042
        *(eax_2 + 4) = ecx_10
        eax_2 += 8
    
    int32_t ecx_11 = *(arg3 + 0x154)
    
    if (ecx_11 != 0)
        *eax_2 = 0x20a9
        *(eax_2 + 4) = ecx_11
        eax_2 += 8
    
    bool cond:0 = *(arg3 + 0x13c) == 0
    *eax_2 = 0x2003
    
    if (cond:0)
        *(eax_2 + 4) = 0x2025
    else
        *(eax_2 + 4) = 0x2027
    
    *(eax_2 + 8) = 0
    float* var_140 = &var_8
    int32_t* var_144 = &var_130
    int32_t format
    int32_t ecx_12
    int32_t edx_2
    format, ecx_12, edx_2 = sub_5de5d0(arg3, edx_1, ecx_11)
    
    if (format == 0)
        if (*(arg3 + 0x13c) s>= format)
        label_5de8cd:
            format = sub_5de280(&ppfd, hdc)
            
            if (format == 0)
                sub_5cce60("No matching GL pixel format available")
                return 0xffffffff
        else
            float* var_140_1 = &var_8
            int32_t* var_144_1 = &var_130
            *(eax_2 + 4) = 0x2025
            format = sub_5de5d0(arg3, edx_2, ecx_12)
            *(eax_2 + 4) = 0x2027
            
            if (format == 0)
                goto label_5de8cd
    
    if (SetPixelFormat(hdc, format, &ppfd) != 0)
        return 0
    
    sub_5dc5a0("SetPixelFormat()")
    return 0xffffffff
}
