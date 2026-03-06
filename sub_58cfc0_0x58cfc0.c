// 函数名称: sub_58cfc0
// 虚拟地址: 0x58cfc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58cfc0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glCopyPathNV")
    PROC eax = wglGetProcAddress("glCopyPathNV")
    data_307ac88 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glCoverFillPathInstancedNV")
    data_307ac8c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glCoverFillPathNV")
    data_307ac90 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glCoverStrokePathInstancedNV")
    data_307ac94 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glCoverStrokePathNV")
    data_307ac98 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glDeletePathsNV")
    data_307ac9c = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glGenPathsNV")
    data_307aca0 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glGetPathColorGenfvNV")
    data_307aca4 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glGetPathColorGenivNV")
    data_307aca8 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glGetPathCommandsNV")
    data_307acac = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glGetPathCoordsNV")
    data_307acb0 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glGetPathDashArrayNV")
    data_307acb4 = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glGetPathLengthNV")
    data_307acb8 = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glGetPathMetricRangeNV")
    data_307acbc = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glGetPathMetricsNV")
    data_307acc0 = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glGetPathParameterfvNV")
    data_307acc4 = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glGetPathParameterivNV")
    data_307acc8 = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glGetPathSpacingNV")
    data_307accc = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_18 = wglGetProcAddress("glGetPathTexGenfvNV")
    data_307acd0 = eax_18
    
    if (eax_18 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_19 = wglGetProcAddress("glGetPathTexGenivNV")
    data_307acd4 = eax_19
    
    if (eax_19 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_20 = wglGetProcAddress("glInterpolatePathsNV")
    data_307acd8 = eax_20
    
    if (eax_20 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_21 = wglGetProcAddress("glIsPathNV")
    data_307acdc = eax_21
    
    if (eax_21 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_22 = wglGetProcAddress("glIsPointInFillPathNV")
    data_307ace0 = eax_22
    
    if (eax_22 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_23 = wglGetProcAddress("glIsPointInStrokePathNV")
    data_307ace4 = eax_23
    
    if (eax_23 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_24 = wglGetProcAddress("glPathColorGenNV")
    data_307ace8 = eax_24
    
    if (eax_24 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_25 = wglGetProcAddress("glPathCommandsNV")
    data_307acec = eax_25
    
    if (eax_25 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_26 = wglGetProcAddress("glPathCoordsNV")
    data_307acf0 = eax_26
    
    if (eax_26 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_27 = wglGetProcAddress("glPathCoverDepthFuncNV")
    data_307acf4 = eax_27
    
    if (eax_27 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_28 = wglGetProcAddress("glPathDashArrayNV")
    data_307acf8 = eax_28
    
    if (eax_28 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_29 = wglGetProcAddress("glPathFogGenNV")
    data_307acfc = eax_29
    
    if (eax_29 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_30 = wglGetProcAddress("glPathGlyphRangeNV")
    data_307ad00 = eax_30
    
    if (eax_30 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_31 = wglGetProcAddress("glPathGlyphsNV")
    data_307ad04 = eax_31
    
    if (eax_31 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_32 = wglGetProcAddress("glPathParameterfNV")
    data_307ad08 = eax_32
    
    if (eax_32 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_33 = wglGetProcAddress("glPathParameterfvNV")
    data_307ad0c = eax_33
    
    if (eax_33 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_34 = wglGetProcAddress("glPathParameteriNV")
    data_307ad10 = eax_34
    
    if (eax_34 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_35 = wglGetProcAddress("glPathParameterivNV")
    data_307ad14 = eax_35
    
    if (eax_35 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_36 = wglGetProcAddress("glPathStencilDepthOffsetNV")
    data_307ad18 = eax_36
    
    if (eax_36 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_37 = wglGetProcAddress("glPathStencilFuncNV")
    data_307ad1c = eax_37
    
    if (eax_37 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_38 = wglGetProcAddress("glPathStringNV")
    data_307ad20 = eax_38
    
    if (eax_38 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_39 = wglGetProcAddress("glPathSubCommandsNV")
    data_307ad24 = eax_39
    
    if (eax_39 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_40 = wglGetProcAddress("glPathSubCoordsNV")
    data_307ad28 = eax_40
    
    if (eax_40 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_41 = wglGetProcAddress("glPathTexGenNV")
    data_307ad2c = eax_41
    
    if (eax_41 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_42 = wglGetProcAddress("glPointAlongPathNV")
    data_307ad30 = eax_42
    
    if (eax_42 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_43 = wglGetProcAddress("glStencilFillPathInstancedNV")
    data_307ad34 = eax_43
    
    if (eax_43 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_44 = wglGetProcAddress("glStencilFillPathNV")
    data_307ad38 = eax_44
    
    if (eax_44 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_45 = wglGetProcAddress("glStencilStrokePathInstancedNV")
    data_307ad3c = eax_45
    
    if (eax_45 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_46 = wglGetProcAddress("glStencilStrokePathNV")
    data_307ad40 = eax_46
    
    if (eax_46 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_47 = wglGetProcAddress("glTransformPathNV")
    data_307ad44 = eax_47
    
    if (eax_47 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glWeightPathsNV")
    data_307ad48 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
